-- 01 - Απλά Ερωτήματα


-- 1.1	Να βρεθούν οι πληροφορίες από όλα τα τμήματα
SELECT *
FROM department;

-- 1.2	Να βρεθούν το όνομα και ο κωδικός των τμημάτων που βρίσκονται στο Dallas
SELECT *
FROM department
WHERE location = 'Dallas';

-- 1.3	Να βρεθούν οι πληροφορίες για όλους τους υπαλλήλους
SELECT *
FROM employee;

-- 1.4	Να βρεθεί το επίθετο, το όνομα και ο κωδικός για όλους τους υπαλλήλους που έχουν κωδικό >= 15000
SELECT emplname, empfname, empno
FROM employee
WHERE empno >= 15000;

-- 1.5	Να βρεθούν οι πληροφορίες για όλα τα έργα.
SELECT *
FROM works;

-- 1.6	Να βρεθούν τα ονόματα των έργων και ο προϋπολογισμός τους σε € και $
--	έστω ότι η αποθηκευμένη τιμή είναι σε € και ότι 1€ = 1.45$
--	Να βρεθούν τα ονόματα των έργων και ο προυπολογισμός τους σε € και $
--	έστω ότι η αποθηκευμένη τιμή είναι σε € και ότι 1€ = 1.45$
SELECT projname, budget AS 'Euro', budget * 1.45 AS 'Dollars'
FROM project; 


-- 1.7	Να βρεθούν τα ονόματα των έργων με προυπολογισμό > 60000 λίρες
--	έστω ότι η ισοτιμία είναι 1 € = 0.51 λίρες
SELECT projname, budget, budget * 0.51
FROM project
WHERE budget * 0.51 > 60000; 

-- 1.8	Να βρεθούν οι κωδικοί των υπαλλήλων και ο κωδικός του έργου
--	για τους γραμματείς (Clerk) που εργάζονται στο έργο p2.
SELECT empno, projno
FROM works
WHERE projno = 'p2' AND job = 'Clerk';

-- 1.9	Να βρεθούν οι κωδικοί των υπαλλήλων και ο κωδικός του έργου
--	για όλους τους υπαλλήλους που εργάζονται στο p1 ή στο p2.
SELECT empno, projno
FROM works
WHERE projno = 'p1' OR projno = 'p2';


-- 1.10	Να βρεθούν οι κωδικοί των υπαλλήλων για όλους τους υπαλλήλους που
--	εργάζονται στο p1 ή στο p2. O κάθε κωδικός να εμφανίζεται μία φορά.
SELECT DISTINCT empno
FROM works
WHERE projno IN ('p1', 'p2');


-- 1.11	Να βρεθούν οι κωδικοί και τα ονόματα των υπαλλήλων
--	που δεν ανήκουν στο τμήμα d2
SELECT empno, empfname
FROM employee
WHERE deptno NOT IN ('d2') OR (deptno = 'd2') IS NOT TRUE;



-- 1.12	Να εμφανίσετε όλες τις στήλες για τους υπαλλήλους
--	με κωδικό ίσο με 29346 ή 28559 ή 25348.
SELECT *
FROM employee
WHERE empno = '29346' OR empno = '28559' OR empno = '25348';


-- 1.13	Να εμφανίσετε όλες τις στήλες για τους υπαλλήλους
--	των οποίων ο κωδικός δεν είναι 10102 ούτε 9031
SELECT *
FROM employee
WHERE empno NOT IN ('10102', '9031');


-- 1.14	Να βρεθούν τα έργα των οποίων ο προϋπολογισμός
--	είναι από 95000 έως και 120000.
SELECT projname
FROM project
WHERE budget >= '95000' AND budget <= '120000';


-- 1.15	Να βρεθούν οι κωδικοί των υπαλλήλων που απασχολούνται ως Manager
--	και δεν μπήκαν στο έργο τους το 1998.
SELECT empno
FROM works
WHERE job = 'Manager' AND enterdate NOT BETWEEN '1998-01-01' AND '1998-12-31';


-- 1.16	Να βρεθεί ο κωδικός των υπαλλήλων και του έργου για υπαλλήλους που έχουν τοποθετηθεί
--	στο p2 και δεν τους έχει ανατεθεί κάποια γνωστή εργασία.
SELECT empno, projno
FROM works
WHERE projno = 'p2' AND job IS NULL;


-- 1.17	Να βρεθούν οι κωδικοί των υπαλλήλων και εργασίες τους στο έργο p1
--	Οι Null τιμές να εμφανισθούν ως 'Άγνωστη εργασία'.
SELECT empno, IFNULL (job, "Άγνωστη εργασία") AS job_p1
FROM works
WHERE projno = 'p1';


-- 1.18	Να βρεθούν ο κωδικός το επίθετο και το όνομα των υπαλλήλων
--	το επίθετο των οποίων αρχίζει με το γράμμα J.
SELECT empno, empfname, emplname
FROM employee
WHERE empfname LIKE 'J%';


-- 1.19	Να βρεθούν ο κωδικός το επίθετο και το όνομα των υπαλλήλων
--	το όνομα των οποίων έχει το γράμμα a σαν δεύτερο χαρακτήρα.
SELECT empno, emplname, empfname
FROM employee
WHERE emplname REGEXP '^[α-ω]α';


-- 1.20	Να βρεθούν όλα τα τμήματα οι τοποθεσίες των οποίων
--	αρχίζουν με ένα γράμμα από C ως F
SELECT deptno
FROM department
WHERE location REGEXP '^[C-F]';


-- 1.21	Να βρεθούν ο κωδικός το επίθετο και το όνομα των υπαλλήλων
--	το επίθετο των οποίων δεν αρχίζει με τα γράμματα G,H,I,J,K,L,M,N,O
--	και το όνομα των οποίων αρχίζει με τα γράμματα E ή Z.
SELECT empno, emplname, empfname
FROM employee
WHERE emplname NOT REGEXP '^[G-O]' AND empfname REGEXP '^[EZΓ]'  ;


-- 1.22	Να βρεθούν όλες οι λεπτομέρειες για τους υπαλλήλους
--	τα ονόματα των οποίων δεν τελειώνουν με το γράμμα n.
SELECT *
FROM employee
WHERE empfname NOT REGEXP 'n$';


-- 1.23	Να βρεθούν όλα τα έργα
--	τα ονόματα των οποίων περιέχουν το γράμμα _ (κάτω παύλα).
SELECT projno
FROM project
WHERE projname REGEXP '%_%';


-- 1.24	Να βρεθούν ο κωδικός και τα ονόματα των υπαλλήλων
--	ταξινομημένα σύμφωνα με τον κωδικό
SELECT empno, empfname
FROM employee
ORDER BY empno; 


-- 1.25	Να βρεθούν ο κωδικός και τα ονόματα των υπαλλήλων
--	ταξινομημένα σύμφωνα με τον κωδικό σε φθίνουσα σειρά
SELECT empno, empfname
FROM employee
ORDER BY empno DESC;


-- 1.26	Να βρεθούν ο κωδικός και τα ονόματα των υπαλλήλων
--	ταξινομημένα με ονοματεπώνυμο
SELECT empno, CONCAT (empfname, '  ', emplname) AS 'Ονοματεπώνυμο'
FROM employee 
ORDER BY empfname, emplname;



