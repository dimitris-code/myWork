 -- 02 - Αθροιστικές Συναρτήσεις
-- SUM, COUNT, AVG, MAX,MIN,
-- GROUP BY, WITH ROLLUP, HAVING, GROUP_CONCAT

-- 2.1	Να υπολογίσετε το άθροισμα όλων των προϋπολογισμών έργων
SELECT SUM(budget) AS 'Άθροισμα'
FROM project;


-- 2.2	Να υπολογίσετε την μέση τιμή όλων των προϋπολογισμών έργων
SELECT AVG(budget) AS 'Άθροισμα'
FROM project;

-- 2.3	Να βρεθεί το μεγαλύτερο budget από τα project
SELECT MAX(budget) AS 'Max Budget'
FROM project;

-- 2.4	Να υπολογίσετε την μέση τιμή όλων των προϋπολογισμών έργων
--	με ποσά μεγαλύτερα των 100000
SELECT AVG(budget) AS 'Average budget'
FROM project
WHERE budget > 100000;

-- 2.5	Να βρεθεί το πλήθος των υπαλλήλων ανά project
SELECT COUNT(*), projno
FROM works
GROUP BY projno;

-- 2.6	Να βρεθεί το πλήθος των υπαλλήλων ανά project
--	Αν κάποιος υπάλληλος έχει δύο εργασίες στο ίδιο project
--	να υπολογιστεί μία φορά.
/* (Στην βάση μας δεν υπάρχει η δυνατότητα ένας υπάλληλος να έχει 
   δύο εργασίες στο ίδιο project γιατί υπάρχει περιορισμός από το primary key) */
SELECT projno, COUNT(DISTINCT empno)
FROM works
GROUP BY projno;

-- 2.7	Να βρεθεί το πλήθος των υπαλλήλων ανά project
--	και το ΤΕΛΙΚΟ ΑΘΡΟΙΣΜΑ
SELECT projno, COUNT(empno)
FROM works
GROUP BY projno
WITH ROLLUP; 

-- 2.8	Να βρεθούν τα έργα που απασχολούν λιγότερα από 4 άτομα
SELECT projno, count(empno)
FROM works
GROUP BY projno
HAVING COUNT(empno) < 4;

-- 2.9	Να βρεθούν τα έργα που απασχολούν περισσότερα από 3 άτομα άτομα και το τελικό άθροισμα
SELECT projno, COUNT(empno)
FROM works
	GROUP BY projno
WITH ROLLUP
HAVING COUNT(empno) > 3;

-- 2.10	Να βρεθεί το πλήθος των υπαλλήλων ανά project και εργασία
SELECT projno, COUNT(empno)
FROM works
GROUP BY projno;

-- 2.11	Να βρεθεί το πλήθος των γραμματέων ανά project;
SELECT projno, COUNT(empno)
FROM works
WHERE job = 'Clerk'
GROUP BY projno;

-- 2.12	Να βρεθεί το πλήθος των γραμματέων (Clerk) ανά project 
--	για τα project που απασχολούν περισσότερους από έναν γραμματέα
SELECT projno, COUNT(empno)
FROM works
WHERE job = 'Clerk'
GROUP BY projno
HAVING COUNT(empno) > 1;


-- 2.13	Να βρεθεί το πλήθος των διαφορετικών εργασιών (είδη εργασίας)  σε κάθε έργο
SELECT projno, COUNT(DISTINCT job)
FROM works
GROUP BY projno;

-- 2.14	Να βρεθεί το πλήθος των εργαζομένων ανά project και εργασία
--	Να μετρηθούν και οι υπάλληλοι που δεν τους έχει ανατεθεί εργασία.
SELECT projno, COUNT(empno)
FROM works
GROUP BY projno;

-- 2.15	Να βρεθεί το πλήθος των εργαζομένων ανά τμήμα (deptno)
SELECT deptno, COUNT(empno)
FROM employee
GROUP BY deptno;

-- 2.16	Να βρεθεί το πλήθος των εργαζομένων ανά τμήμα (deptno) και τα ονόματα τους χωρισμένα με ",".
--	Να υπολογίζετε και το τελικό σύνολο των εργαζομένων.
SELECT COUNT(empno), IFNULL(deptno, 'Άγνωστο τμήμα') AS dept_no, empfname, emplname, CONCAT(empfname, ',', emplname) AS 'Ονοματεπώνυμο' 
FROM employee
GROUP BY deptno
WITH ROLLUP;


