-- 03 - Απλά Δευτερεύοντα Ερωτήματα

-- 3.1	Να βρεθούν όλοι οι υπάλληλοι που εργάζονται στο τμήμα έρευνας 'Research'
SELECT * FROM employee
WHERE deptno IN (
SELECT deptno FROM department
WHERE deptname = 'Research');

-- 3.2	Να βρεθούν όλοι οι κωδικοί υπαλλήλων και οι κωδικοί των  project που αποσχολούνται, για τους υπαλλήλους που έχουν κωδικό μικρότερο από τον κωδικό του υπαλλήλου με επίθετο 'Moser'
SELECT empno, projno From works
where empno <  (

SELECT empno FROM employee
WHERE emplname = 'Moser');

-- 3.3	Να βρεθούν όλες οι λεπτομέρειες για τους υπαλλήλους το τμήμα εργασίας των οποίων είναι στο Dallas.
SELECT * FROM employee
WHERE deptno in
(SELECT deptno FROM department
WHERE location = 'Dallas');

-- 3.4	Να βρεθεί το ονοματεπώνυμο του υπαλλήλου με τον μικρότερο κωδικό
SELECT empno, emplname, empfname
FROM employee 
WHERE empno = (
SELECT MIN(empno)
FROM employee); 

-- 3.5	Να βρεθούν τα ονοματεπώνυμα των υπαλλήλων που άρχισαν την εργασία τους μετά την ‘1998-01-01’ 
SELECT empno, emplname, empfname
FROM employee
WHERE empno IN (
SELECT distinct empno FROM works
WHERE enterdate > '1998-01-01 00:00:00');

-- 3.6	Να βρεθεί ο κωδικός του Manager που τοποθετήθηκε τελευταίος στην θέση του
SELECT empno FROM works	
WHERE job = 'Manager' AND
enterdate = (
SELECT MAX(enterdate) FROM works
WHERE job = 'Manager');

-- 3.7	Να βρεθεί ο κωδικός και το όνομα του Manager που τοποθετήθηκε τελευταίος στην θέση του
SELECT empno, empfname, emplname FROM employee
WHERE empno IN (
SELECT empno FROM works
WHERE job = 'Manager' AND
enterdate = ( SELECT MAX(enterdate) FROM works
WHERE job = 'Manager'));

-- 3.8	Να βρεθούν τα επίθετα όλων των υπαλλήλων που εργάζονται στο έργο Apollo
SELECT empfname, emplname FROM employee
WHERE empno IN (
SELECT empno FROM works
WHERE projno IN (
SELECT projno FROM project
WHERE projname = 'Apollo')); 

-- 3.9	Να βρεθεί το πλήθος των εργαζομένων ανά εργασία 
SELECT job, COUNT(*) FROM works
GROUP BY job;

-- 3.10	Να βρεθεί το πλήθος των εργαζομένων ανά project
SELECT projno, COUNT(*) FROM works
GROUP BY projno;

-- 3.11	Να βρεθεί το πλήθος των εργαζομένων ανά project και εργασία
SELECT projno, job, COUNT(*) FROM works
GROUP BY projno, job;

-- 3.12	Να βρεθούν τα project που έχουν περισσότερους από 3 υπαλλήλους
SELECT projno, COUNT(*) FROM works
GROUP BY projno
HAVING COUNT(*) > 3;

-- 3.13	Να βρεθούν το όνομα και ο κωδικός των project  που έχουν περισσότερους από 3 υπαλλήλους
SELECT projno, projname FROM project
WHERE projno IN (
SELECT projno FROM works
GROUP BY projno
HAVING COUNT(*) > 3);

-- 3.14 Να βρεθούν το όνομα και ο κωδικός των project που αποσχολούν λιγότερους από 2 γραμματείς.
SELECT projno, projname FROM project
WHERE projno IN (
SELECT projno FROM works WHERE job = 'Clerk'
GROUP BY projno, job
HAVING COUNT(*) < 2);
	
-- 3.15	Να βρεθούν τα στοιχεία του project με το μεγαλύτερο budget
SELECT * FROM project
WHERE projno IN (
	SELECT projno FROM project
	WHERE budget = (
		SELECT MAX(budget) FROM project)); 

-- 3.16	Να βρεθεί ποιός είναι ο μεγαλύτερος αριθμός υπαλλήλων που υπάρχουν σε κάποιο project
SELECT MAX(cnt)
FROM (
SELECT projno, COUNT(*) AS cnt FROM works
GROUP BY projno) x;

-- 3.17	Να βρεθεί(ουν) το(α) project που έχει(ουν) τους περισσότερους υπαλλήλους.
SELECT * FROM project
WHERE projno IN (
SELECT projno FROM x