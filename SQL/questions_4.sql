-- 5.1	Να βρεθούν όλες οι λεπτομέρειες για τους υπαλλήλους μαζί
-- με το όνομα και την περιοχή του τμήματος που εργάζεται
SELECT e.empno, e.emplname, e.empfname, d.deptno, d.deptname, d.location
	FROM employee e INNER JOIN department d ON e.deptno = d.deptno;
		

-- 5.2	Να βρεθούν ο κωδικός, το επίθετο και το όνομα του υπαλλήλου,
-- καθώς και ο κωδικός και το όνομα του τμήματος που ανήκει.
SELECT e.empno, e.emplname, e.empfname, d.deptno, d.deptname
	FROM employee e INNER JOIN department d ON e.deptno = d.deptno;
	

-- 5.3	Να βρεθεί ο κωδικός και το επίθετο και το όνομα του υπαλλήλου, ο κωδικός του project,
-- η εργασία και η ημερομηνία που ξεκίνησε, όλων των υπαλλήλων
SELECT e.empno, e.emplname, e.empfname, w.projno, w.job, w.enterdate
	FROM employee e INNER JOIN works w ON e.empno = w.empno; 

-- 5.4	Να βρεθεί ο κωδικός και το επίθετο του υπαλλήλου, το όνομα και ο κωδικός του project,
-- η εργασία και η ημερομηνία που ξεκίνησε, όλων των υπαλλήλων
-- Να εμφανισθούν και οι υπάλληλοι που δεν έχουν τοποθετηθεί σε project
SELECT e.empno, e.emplname, p.projname, w.job, w.enterdate, w.empno
	FROM employee e LEFT JOIN works w
			ON e.empno = w.empno
				LEFT JOIN project p ON w.projno = p.projno
	WHERE w.empno IS NULL;
					
-- 5.5	Να βρεθεί ο κωδικός και το επίθετο του υπαλλήλου, το όνομα και ο κωδικός του project,
-- η εργασία και η ημερομηνία που ξεκίνησε, όλων των υπαλλήλων που το όνομα τους αρχίζει από e ή E
SELECT e.empno, e.emplname, p.projno, p.projname, w.job, w.enterdate
	FROM employee e LEFT join works w ON e.empno = w.empno
				       LEFT JOIN project p ON w.projno = p.projno
	WHERE e.emplname REGEXP '^B';


