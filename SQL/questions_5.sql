 -- m06 INSERT  UPDATE  DELETE

-- 6.1	Να κάνετε εισαγωγή νέου εργαζόμενου με κωδικό 70000
-- με Επίθετο 'Γεωργίου' και Όνομα = 'Ελένη'
INSERT INTO employee (empno, empfname, emplname)
VALUES ('70000', 'Ελένη', 'Γεωργίου');

-- 6.2	Να κάνετε εισαγωγή με μία εντολή 2 νέων εργαζομένων των Κωνσταντίνου Βασίλειος και Παπαδόπουλος Δημήτριος με κωδικούς 20001 και 20002 αντίστοιχα στο τμήμα 'd2'
INSERT INTO employee (empno, empfname, emplname, deptno)
VALUES ('20003', 'Βασίλειος', 'Κωνσταντίνου', 'd2'),
		 ('20004', 'Δημήτρης', 'Παπαδόπουλος', 'd2');

-- 6.3	Να αναθέσετε στον υπάλληλο με κωδικό 70000 την εργασία 'Analyst' στα project 'p1' και 'p2' με σημερινή ημερομηνία.
 INSERT INTO works (empno, job, projno, enterdate)
 VALUES ('70000', 'Analyst', 'p1', '2020-01-09 00:00:00'),
 	     ('70000', 'Analyst', 'p2', '2020-01-09 00:00:00');

-- 6.4	α. Να δημιουργηθεί προσωρινός πίνακας temp1 ίδιος με τον πίνακα υπαλλήλων
--       β. Να γίνει εισαγωγή στον πίνακα temp1 όλων των υπαλλήλων από τον πίνακα employee με κωδικό < 10000
--       γ. Να εμφανίσετε τα περιεχόμενα του πίνακα temp1
--       δ. Να διαγράψετε τον πίνακα temp1
CREATE TEMPORARY TABLE temp1
LIKE employee;
INSERT INTO temp1
SELECT *
FROM employee
WHERE empno < '10000';

SELECT * FROM temp1;
DROP TABLE temp1;

-- 6.5	Να δημιουργηθεί προσωρινός πίνακας temp2 στην μνήμη με περιεχόμενα τον κωδικό, το όνομα και το επίθετο του υπαλλήλου, το όνομα του project και την εργασία του.
-- Να γραφούν και οι υπάλληλοι που δεν τους έχει ανατεθεί ακόμη εργασία.
-- Εμφανίσετε τα περιεχόμενα του πίνακα temp2 για να ελέγξετε το αποτέλεσμα.
CREATE TEMPORARY TABLE temp2 ENGINE = MEMORY
SELECT e.empno, e.empfname, e.emplname, w.projno, w.job
FROM employee e INNER JOIN works w
ON e.empno = w.empno;

SELECT * FROM temp2;
-- 6.6	Να γίνει εισαγωγή εργαζομένου με κωδικό 80000 και όνομα και επίθετο του εργαζόμενου με κωδικό 20000.
INSERT INTO employee (empno, empfname, emplname)
SELECT '80000', empfname, emplname
FROM employee
WHERE empno = '20000';

SELECT * FROM employee;

-- 6.7	Κάντε ενημέρωση του υπαλλήλου με κωδικό 70000
-- Θέστε κωδικό τμήματος = 'd3' όνομα 'Μαρία1'  και επίθετο 'Γεωργίου1'
UPDATE employee
SET deptno = 'd3', empfname = 'Μαρία1', emplname = 'Γεωργίου1'
WHERE empno = '70000';

-- Εμφανίστε τα περιεχόμενα του πίνακα employee για να ελέγξετε το αποτέλεσμα.
SELECT * FROM employee;

-- 6.8	Να κάνετε εισαγωγή εργαζόμενου με κωδικό 70000 στο τμήμα = 'd2' όνομα 'Μαρία'  και επίθετο 'Γεωργίου'.
-- Αν ο κωδικός υπάρχει να γίνει μόνο η αλλαγή τμήματος.
INSERT INTO employee (empno, deptno, empfname, emplname)
VALUES ('70000', 'd2', 'Μαρία', 'Γεωργίου')
ON duplicate KEY UPDATE deptno = 'd2';

-- 6.9	Να διαγράψετε τον υπάλληλο με κωδικό 20002
DELETE FROM employee
WHERE empno = '20002';

-- 6.10	α. Θέστε όλες τις εργασίες της Γεωργίου1 σε NULL
--  b. Εμφανίστε το αποτέλεσμα της ενημέρωσης
UPDATE works
SET job = NULL, enterdate = NULL
WHERE empno = (
	SELECT empno
	FROM employee
	WHERE emplname = 'Γεωργίου1');


-- 6.11	Θέστε όλες τις εργασίες της 'Jones' από 'Analyst' σε 'Manager' 
UPDATE works
SET job = 'Manager'
WHERE empno = (
	SELECT empno
	FROM employee
	WHERE emplname = 'Jones')
AND job = 'Analyst';


-- 6.12	Να διαγραφούν όλες οι εργασίες της Γεωργίου1 από τον πίνακα εργασιών.
DELETE FROM works
WHERE empno = (
	SELECT empno FROM employee
	WHERE emplname = 'Γεωργίου1');

-- 6.13	Να αναθέσετε στον υπάλληλο με κωδικό 70000 την εργασία 'Manager' στα project 'p1' και 'p3' με σημερινή ημερομηνία.
INSERT INTO works (empno, job, projno, enterdate)
VALUES ('70000', 'Manager', 'p1', NOW() ),
	    ('70000', 'Manager', 'p3', NOW() );