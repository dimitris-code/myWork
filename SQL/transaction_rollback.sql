USE sample;

CREATE VIEW vEmpJobs AS
	SELECT e.empno, e.emplname, e.empfname, w.job
	FROM employee e LEFT JOIN works w
	ON e.empno = w.empno;
	

START TRANSACTION;

UPDATE project SET budget = '520000'
WHERE projno = 'p1';

SELECT *
FROM project;
ROLLBACK;

SELECT *
FROM project;
