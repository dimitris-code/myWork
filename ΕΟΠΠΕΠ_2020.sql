-- ΟΜΑΔΑ Α --------------------------------------------------------------------------------------------------------------------------------------

-- 95. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τις στήλες DNAME και DEPTNO από τον πίνακα DEPT.
SELECT dname, deptno
FROM dept;

-- 96. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τα στοιχεία των υπαλλήλων του τμήματος με κωδικό 30.
SELECT *
FROM emp
WHERE deptno = 30;

-- 97. Γράψτε την εντολή SQL, ώστε να εμφανίσετε επώνυμα, κωδικούς υπαλλήλων, όνομα τμήματος, κωδικό τμήματος, είδος εργασίας για τους γραμματείς.
SELECT emp.job, emp.empno, emp.ename, dept.dname, dept.deptno
FROM emp
LEFT JOIN dept
ON emp.deptno = dept.deptno
WHERE job = 'Γραμμ';

-- 98. Σε μια Βάση Δεδομένων περιγράψτε τη διαδικασία "κύλιση προς τα πίσω" (roll back).
-- Ανακυκλώνει μια ρητή ή έμμεση συναλλαγή στην αρχή της συναλλαγής ή σε ένα σημείο αποθήκευσης μέσα στη συναλλαγή.
USE pistopiisi;
	CREATE VIEW vEmpSal AS
	SELECT emp.sal, emp.job, emp.empno, emp.ename, dept.dname, dept.deptno
	FROM emp
	LEFT JOIN dept
	ON emp.deptno = dept.deptno
	WHERE job = 'Γραμμ';
START TRANSACTION;

UPDATE emp SET sal = sal * 2
WHERE job = 'Γραμμ';

SELECT * FROM emp;

ROLLBACK;

SELECT * FROM emp;


-- 99. Ποιες είναι οι απειλές για την ασφάλεια μιας Βάσης Δεδομένων;
 
-- Κορυφαίες απειλές για την ασφάλεια Βάσεων Δεδομένων:

-- 1. Κατάχρηση δικαιωμάτων (Privilege Abuse)
-- 	α. Κατάχρηση νόμιμων δικαιωμάτων για μη εξουσιοδοτημένους σκοπούς.
-- 	β. Υπερβολικά προνόμια που υπερβαίνουν την απαίτηση λειτουργίας εργασίας.

-- 2. Αδύναμος έλεγχος ταυτότητας
-- 	α. Αδύνατες ή αναποτελεσματικές πολιτικές κωδικού πρόσβασης.
-- 	β. Η κλοπή των διαπιστευτηρίων σύνδεσης, της κοινωνικής μηχανικής.
-- 	γ. Κακή κρυπτογράφηση.

-- 3. Διαμόρφωση αδύναμων συστημάτων
-- 	α. Χρήση προεπιλεγμένων ρυθμίσεων.
-- 	β. Εγκατάσταση ακατάλληλων εργαλείων και υπηρεσιών.
-- 	γ. Έλλειψη βασικής γραμμής ασφαλείας.

-- 4. Ευπάθειες βάσης δεδομένων και λειτουργικού συστήματος
-- 	α. SQL Injections.
-- 	β. Διαδικτυακή συγγραφή ιστοτόπων.
-- 	γ. Ριζικά κιτ.
-- 	δ. Αδύναμα πρωτόκολλα επικοινωνίας.

-- 5. Κακή πίστωση ελέγχου (Poor Audit Trail)

-- 6. Εμπιστοσύνη εφαρμογών Front-End

-- 7. Αντίγραφα ασφαλείας
-- 	α. Ατελής και αποτυχημένη δημιουργία αντιγράφων ασφαλείας.
-- 	β. Κλοπή ή ακατάλληλη αποθήκευση αντιγράφων ασφαλείας ή σκληρών δίσκων.


-- 100. Ποια είναι η χρήση των αρχείων ημερολογίων επανάληψης (Log File) σε μια Βάση Δεδομένων;
-- Ένα αρχείο καταγραφής συναλλαγών είναι ένα αρχείο, αναπόσπαστο μέρος κάθε βάσης δεδομένων.
-- Περιέχει αρχεία καταγραφής που παράγονται κατά τη διάρκεια της διαδικασίας καταγραφής σε μια Βάση Δεδομένων.

-- 101. Γράψτε την εντολή SQL, ώστε να προσθέσετε στον πίνακα EMP τις πλειάδες Address1 και Zip1.
ALTER TABLE emp
ADD COLUMN Address1 VARCHAR(45),
ADD COLUMN Zip1 VARCHAR(5);


SELECT * FROM emp;


-- 102. Γράψτε την εντολή SQL, ώστε να εμφανίσετε όνομα, θέση και μισθό των υπαλλήλων του τμήματος 20 που κερδίζουν (SAL + COMM) πάνω από 2000€
SELECT deptno, ename, job, sal AS 'sal + comm > 2000'
FROM emp
WHERE (sal + comm) > 2000 AND deptno = 20;



-- 103. Γράψτε την εντολή SQL ώστε να εμφανίσετε τη συνολική αμοιβή (SAL + COMM) ανά πωλητή.
SELECT job, ename, sal + comm
FROM emp
WHERE job = 'Πωλ';


-- 104. Γράψτε την εντολή SQL, ώστε να ενημερώσετε το μισθό των υπαλλήλων του τμήματος 20 με 300€ επιπλέον στο μισθό τους.
UPDATE emp
SET sal = sal + 300
WHERE deptno = 20;

SELECT * FROM emp;


-- 105. Γράψτε την εντολή SQL, ώστε να εμφανίσετε ποιοι είναι οι πιο καλοπληρωμένοι (SAL + COMM) ανά πωλητή.
SELECT empno, ename, job, sal, comm
FROM emp
WHERE job = 'Πωλ' AND comm > 0;


-- 106. Γράψτε την εντολή SQL, ώστε να εμφανίσετε το επώνυμο και το όνομα του τμήματος των υπαλλήλων που εργάζονται ως γραμματείς.
SELECT emp.job, emp.ename, dept.dname
FROM emp
LEFT JOIN dept
ON emp.deptno = dept.deptno
WHERE job = 'Γραμμ';


-- -------------------------------------------------------------------------------------------------------------------------------


-- ΟΜΑΔΑ Β -----------------------------------------------------------------------------------------------------------------------

-- 179. 	Γράψτε την εντολή SQL, ώστε να κάνετε εισαγωγή των παρακάτω δεδομένων:
-- 			EMPNO: 7369
-- 			ENAME: ΣΑΛΑΜΟΥΡΑΣ
-- 			JΟΒ: ΑΝΑΛΥΤΗΣ
-- 			MGR: 7902
-- 			HIREDATE: 17-Dec-04
-- 			SAL:1900
-- 			COMM:1000
-- 		στον πίνακα EMP (να θεωρήσετε ότι δεν υπάρχουν αυτά τα δεδομένα στον πίνακα).
 
INSERT INTO emp (empno, ename, job, mgr, hiredate, sal, comm)
VALUES (7369, 'Σαλαμούρας', 'Αναλυτής', 7902, '2004-12-17 00:00:00', 1900, 1000);




-- 180. Γράψτε την εντολή SQL, ώστε να ενημέρωσετε τον πίνακα ΕΜP για αλλαγή διεύθυνσης (ADDRESS = ΠΑΠΑΡΗΓΟΠΟΥΛΟΥ 53 ΧΑΛΑΝΔΡΙ, ZIP = 15231) του υπαλλήλου με EMPNO 7369.
UPDATE emp
SET address = 'ΠΑΠΑΡΗΓΟΠΟΥΛΟΥ 53 ΧΑΛΑΝΔΡΙ', zip = 15231
WHERE empno = 7369;

SELECT * FROM emp;



-- 181. Περιγράψτε τις πράξεις σχέσεων που γνωρίζετε στη σχεσιακή δομή Βάσεων Δεδομένων.

--	1.	Πράξεις σχεσιακής Βάσης Δεδομένων (αφορούν τμήματα πλειάδων)
--			ΕΠΙΛΟΓΗ (SELECT)
--			ΠΡΟΒΟΛΗ (PROJECT)

--	2.	Μετονομασία γνωρισμάτων
--			ΑΝΑΘΕΣΗ (ASSIGNMENT)
--			ΜΕΤΟΝΟΜΑΣΙΑ (RENAME)

-- 3.	Πράξεις συνόλων (αφορούν σύνολα πλειάδων)
--			ΈΝΩΣΗ (UNION)
--			ΤΟΜΗ (INTERSECTION)
--			ΔΙΑΦΟΡΑ (DIFFERENCE)

-- 4.	Πράξεις που συνδυάζουν πλειάδες από δύο σχέσεις
--			ΚΑΡΤΕΣΙΑΝΟ ΓΙΝΟΜΕΝΟ (CARTESIAN PRODUCT)
--			ΣΥΝΕΝΩΣΗ (JOIN)
--				a. ΕΣΩΤΕΡΙΚΗ ΣΥΝΕΝΩΣΗ
--				β. ΕΞΩΤΕΡΙΚΗ ΣΥΝΕΝΩΣΗ (ΠΛΗΡΗΣ - FULL OUTER JOIN, ΑΡΙΣΤΕΡΗ - LEFT OUTER JOIN, ΔΕΞΙΑ - RIGHT OUTER JOIN)

-- 5.	ΔΙΑΙΡΕΣΗ (DIVISION)


-- 182. Με τα υφιστάμενα δεδομένα, ποιο είναι το αποτέλεσμα της επόμενης εντολής SQL:
-- 			SELECT * FROM EMP WHERE (JOB = ‘Επ. Εργου’ or JOB = ‘Γραμμ’) AND DEPTNO = 10
SELECT *
FROM emp
WHERE (job = 'Επ.Εργο' OR job = 'Γραμμ') AND deptno = 10;


-- 183. Γράψτε την εντολή SQL ώστε να εμφανίσετε ποιοι έχουν μισθό (SAL) από 1.500 έως 1.800€
SELECT empno, ename, job, sal
FROM emp
WHERE sal >= 1500 AND sal <= 1800;


-- 184. Γράψτε την εντολή SQL, ώστε να διαγράψετε τον πίνακα DEPT 
SET foreign_key_checks = 0;
DROP TABLE if EXISTS dept;
SET foreign_key_checks = 1;

SELECT * FROM dept;


-- 185. Γράψτε την εντολή SQL, ώστε απ’ τον πίνακα ΕΜP να εμφανίσετε τα στοιχεία των υπαλλήλων που το επώνυμό τους αρχίζει με το γράμμα "Μ"
SELECT *
FROM emp
WHERE ename LIKE 'Μ%';


-- 186. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τα στοιχεία των υπαλλήλων της διεύθυνσης 30 και εμφανίστε τους ταξινομημένους κατά το μισθό

-- Ορισμός του πίνακα 'dept' λόγω διαγραφής σε προηγούμενο ερώτημα
CREATE TABLE `dept` (
  deptno int(10) unsigned NOT NULL,
  dname varchar(45) DEFAULT NULL,
  loc varchar(45) DEFAULT NULL,
  PRIMARY KEY (`deptno`)
);

-- Κατανομή δεδομένων στον πίνακα 'dept'
INSERT INTO `dept` (`deptno`,`dname`,`loc`) VALUES
 (10,'Accouting','Ρώμη'),
 (20,'Research','Λονδίνο'),
 (30,'Sales','Παρίσι'),
 (40,'Operations','Αθήνα');

-- Έλεγχος εισόδων
SELECT * FROM dept;

-- Κυρίως απάντηση:
SELECT *
FROM emp
WHERE deptno = 30
GROUP BY sal;


-- 187. Γράψτε την εντολή SQL, ώστε να εμφανίσετε υπαλλήλους με προμήθεια μεγαλύτερη του μισθού τους
SELECT empno, ename, sal, comm
FROM emp
WHERE comm > sal;


-- 188. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τους υπαλλήλους που έχουν ετήσιο μισθό (SAL * 12) πάνω από 40000€
SELECT empno, ename, sal, sal * 12 AS 'sal * 12 > 40000€'
FROM emp
WHERE sal * 12 > 40000;


-- 189. Γράψτε την εντολή SQL, ώστε να εμφανίσετε πόσοι υπάλληλοι δε λαμβάνουν προμήθεια
SELECT empno, ename, job, comm
FROM emp
WHERE comm = 0;


-- 190. Γράψτε την εντολή SQL, ώστε να εμφανίσετε ταξινομημένους τους υπαλλήλους του τμήματος 30 ανάλογα με την προμήθειά τους
SELECT empno, ename, deptno, comm
FROM emp
WHERE deptno = 30
GROUP BY comm;

-- ενναλακτικά: εμφάνιση υπαλλήλων του ίδιου τμήματος που λαμβάνουν προμήθεια μεγαλύτερη των 0.00€
SELECT empno, ename, deptno, comm
FROM emp
WHERE deptno = 30 AND comm > 0
GROUP BY comm;



-- 191. Γράψτε την εντολή SQL, ώστε να διαγράψετε το πεδίο LOC στον πίνακα Dept
ALTER TABLE dept
DROP COLUMN loc;

SELECT * FROM dept;


-- 192. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τα είδη εργασιών του πίνακα EMP χωρίς επαναλήψεις
SELECT DISTINCT job AS 'Είδη εργασιών (emp)'
FROM emp;


-- 193. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τους υπαλλήλους που είναι γραμματείς, αναλυτές ή πωλητές
SELECT empno, ename, job
FROM emp
WHERE (job = 'Γραμμ' OR job = 'Αναλ' OR job = 'Πωλ')
ORDER BY job;


-- 194. Γράψτε την εντολή SQL, ώστε να εμφανίσετε ποιο είναι το πλήθος των διαφορετικών εργασιών (job) για κάθε Τμήμα
SELECT deptno, job, COUNT(empno)
FROM emp
GROUP BY job
ORDER BY deptno;


-- 195. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τους υπαλλήλους που έχουν μισθό κάτω από 4000€ και πάνω από 2000€
SELECT empno, ename, sal 
FROM emp
WHERE sal BETWEEN 2000 AND 4000
ORDER BY sal;


-- 196. Γράψτε την εντολή SQL, ώστε να διαγράψετε τους υπαλλήλους που έχουν συμπληρώσει 25 χρόνια εργασίας και λαμβάνουν μισθό πάνω από 3.000€
-- Επιλογή του ερωτήματος για επιβεβαίωση:
SELECT *
FROM emp
WHERE (DATEDIFF(now(), hiredate)) / 365 > 25 AND sal > 3000;

-- Κυρίως απάντηση:
DELETE FROM emp WHERE (DATEDIFF(now(), hiredate)) / 365 > 25 AND sal > 3000;

-- Επιβεβαίωση διαγραφής στοιχείων του πίνακα
SELECT * FROM emp;



-- 197. Γράψτε την εντολή SQL, ώστε να διαγράψετε τους υπαλλήλους που έχουν συμπληρώσει 25 χρόνια εργασίας και εργάζονται στη Ρώμη
-- ------------------------------
ALTER TABLE dept
ADD loc varchar(45) DEFAULT NULL;

ALTER TABLE dept
DROP COLUMN loc;

SET foreign_key_checks = 0;
DROP TABLE if EXISTS dept;
SET foreign_key_checks = 1;

SELECT * FROM dept;
-- ------------------------------

-- Ορισμός του πίνακα 'dept' λόγω διαγραφής σε προηγούμενο ερώτημα
CREATE TABLE `dept` (
  deptno int(10) unsigned NOT NULL,
  dname varchar(45) DEFAULT NULL,
  loc varchar(45) DEFAULT NULL,
  PRIMARY KEY (`deptno`)
);

-- Κατανομή δεδομένων στον πίνακα 'dept'
INSERT INTO `dept` (`deptno`,`dname`,`loc`) VALUES
 (10,'Accouting','Ρώμη'),
 (20,'Research','Λονδίνο'),
 (30,'Sales','Παρίσι'),
 (40,'Operations','Αθήνα');

-- Έλεγχος εισόδων
SELECT * FROM dept;

-- Κυρίως απάντηση:
-- Επιλογή του ερωτήματος για επιβεβαίωση
SELECT *
FROM emp
WHERE (DATEDIFF(now(), hiredate)) / 365 > 25 AND deptno IN (
	SELECT deptno
	FROM dept
	WHERE loc = 'Ρώμη');
	
-- Διαγραφή των στοιχείων του πίνακα
DELETE FROM emp
WHERE (DATEDIFF(now(), hiredate)) / 365 > 25 AND deptno IN (
	SELECT deptno
	FROM dept
	WHERE loc = 'Ρώμη');
	
-- Έλεγχος πίνακα μετά τη διαγραφή
SELECT * FROM emp;



-- 198. Γράψτε την εντολή SQL, ώστε να δημιουργήσετε έναν πίνακα με όνομα TEMP, με όλες τις πλειάδες του πίνακα EMP και επιπλέον την πλειάδα DNAME από τον πίνακα DEPT με όνομα department
CREATE TEMPORARY TABLE temp LIKE emp;
INSERT INTO temp
	SELECT * FROM emp;
ALTER TABLE temp ADD COLUMN dname VARCHAR(45);
UPDATE temp t1
INNER JOIN dept d1 ON t1.deptno = d1.deptno 
SET t1.dname = d1.dname;
	
SELECT * FROM temp;



-- 199. Γράψτε την εντολή SQL, ώστε να δημιουργήσετε έναν πίνακα με όνομα TEMP1(ΕΝΑΜΕ, DNAME) και
--      το άθροισμα μισθού και προμήθειας στην πλειάδα SAL1 για όσους υπαλλήλους λαμβάνουν προμήθεια
CREATE TEMPORARY TABLE temp1
LIKE temp;
INSERT INTO temp1
	SELECT * FROM temp;
SELECT DISTINCT ename, dname, (sal + comm) AS 'sal1'
FROM temp1
WHERE comm > 0;

DROP TABLE temp;
DROP TABLE temp1;



-- 200.  Γράψτε την εντολή SQL, ώστε να ενημερώσετε τον πίνακα ΕΜP, με αύξηση του μισθού των υπαλλήλων
--       κατά 5%, για όσους υπαλλήλους εργάζονται στο τμήμα ‘SALES’ και δε λαμβάνουν προμήθεια
UPDATE emp
SET sal = sal + (sal * 5 / 100) 
WHERE comm = 0 AND deptno IN (
	SELECT deptno
	FROM dept
	WHERE dname = 'Sales');

SELECT * FROM emp;
-- στο αποτέλεσμα φαίνεται ότι ό Τακίδης παίρνει αύξηση, όμως για κάποιο λόγο, έχει μειωθεί το sal του Κούκη



-- 201. Γράψτε την εντολή SQL, ώστε να εμφανίσετε τους πωλητές του τμήματος 30 με μισθό από 1.500€ έως 1.500 €
SELECT empno, ename, job, sal, deptno
FROM emp
WHERE job = 'Πωλ' AND sal >= 1500 AND sal <= 1500;
-- ο πίνακας δεν περιέχει καμία εγγραφή με sal = 1.500€ 



-- 202. Γράψτε την εντολή SQL, ώστε να εμφανίσετε όνομα, μισθό, προμήθεια και άθροισμα μισθού και προμήθειας για τους πωλητές
SELECT job, ename, sal, comm, (sal + comm) AS 'Άθροισμα μισθού και προμήθειας'
FROM emp
WHERE job = 'Πωλ';



-- 203. Γράψτε την εντολή SQL, ώστε να εμφανιστεί η χρονιά που προσλήφθηκαν οι περισσότεροι υπάλληλοι
SELECT YEAR(hiredate), COUNT(empno)
FROM emp 
GROUP BY YEAR(hiredate)
HAVING COUNT(empno) > 1;



-- 204. Γράψτε την εντολή SQL, ώστε να εμφανίσετε ποιοι υπάλληλοι έχουν μεγαλύτερο μισθό από τον ΑΛΕΒΙΖΟ και ΑΝΔΡΙΤΣΑΚΗ
SELECT empno, ename, job, sal
FROM emp
WHERE sal > (
	SELECT sal
	FROM emp
	WHERE ename = 'Αλεβίζος' AND ename = 'Ανδριτσάκης');
-- Δεν υπάρχει εγγραφή με μεγαλύτερο μισθό από τους δύο



-- 205. Γράψτε την εντολή SQL, ώστε να εμφανίσετε μια λίστα των επικεφαλείς και του πλήθους των υπαλλήλων που επιβλέπουν
SELECT empno, job, ename, COUNT(empno)
FROM emp
WHERE job = 'Επ.Εργο';



-- 206. Γράψτε την εντολή SQL, ώστε να εμφανίσετε όνομα, μισθό και προμήθεια υπαλλήλων με προμήθεια μεγαλύτερη του 25% του μισθού τους
SELECT ename, sal, comm
FROM emp
WHERE comm > (sal * 25 / 100);



-- 207. Γράψτε την εντολή SQL, ώστε να εμφανίσετε την ημερήσια και ωριαία αποζημίωση (SAL) για τους
--		  υπαλλήλους του τμήματος 30 , υποθέτοντας ότι ο μήνας έχει 25 εργάσιμες ημέρες και το ωράριο εργασίας είναι 8 ώρες
SELECT empno, ename, deptno, round(sal / 12 / 25, 2) AS 'Ημερήσια αποζημίωση', ROUND(sal / 12 / 25 / 8, 2) AS 'Ωριαία αποζημίωση' 
FROM emp
WHERE deptno = 30;



-- 208. Γράψτε την εντολή SQL, ώστε να εμφανίσετε το μέσο μισθό (το άθροισμα του SAL δια του πλήθους των υπαλλήλων) για κάθε τμήμα με μέσο μισθό πάνω από 1.000€
SELECT deptno, SUM(sal) / COUNT(empno) AS 'Μέσος μισθός'
FROM emp
WHERE sal > 1000
GROUP BY deptno;



-- 209. Γράψτε την εντολή SQL, ώστε να δημιουργήσετε ένα Check Constraint στον πίνακα Dept και στο πεδίο loc, έτσι ώστε να μπορεί να παίρνει τις τιμές μόνο ‘Αθήνα’ και ‘Θεσσαλονίκη’

-- Έγκυρο
ALTER TABLE dept
ALTER loc SET DEFAULT 'Αθήνα';

-- Για debuging
ALTER TABLE dept
ALTER loc DROP DEFAULT;

-- Μη έγκυρο
ALTER TABLE dept
ADD CONSTRAINT check_loc_ath_thes CHECK (loc = 'Αθήνα') CHECK (loc = 'Θεσσαλονίκη');

SELECT * FROM dept;



-- 210. Γράψτε την εντολή SQL, ώστε να διαγράψετε τους υπαλλήλους του τμήματος 10 οριστικά

-- Οι υπάλληλοι του τμήματος 10 στον πίνακα emp είχαν διαγραφεί σε προηγούμενο ερώτημα
DELETE FROM dept
WHERE deptno = 10;

SELECT * FROM dept;



-- 211. Γράψτε την εντολή SQL, ώστε να εμφανίσετε λίστα υπαλλήλων με τα τμήματα που υπηρετούν, σε ομάδες ανά τμήμα και το σύνολο των υπηρετούντων σε κάθε τμήμα
SELECT deptno, COUNT(empno)
FROM emp
GROUP BY deptno;



-- 212. Γράψτε την εντολή SQL, ώστε να ορίσετε τους πίνακες EMP και DEPT, με τους απαραίτητους περιορισμούς (constraints) ακεραιότητας οντότητας (entity integrity) και ακεραιότητας αναφοράς (referential integrity)
USE pistopiisi;

-- Ακεραιότητας οντότητας (Entity Integrity):
ALTER TABLE emp
ADD CONSTRAINT pk_emp PRIMARY KEY (empno);


-- Ακεραιότητας αναφοράς (Referential Integrity):
ALTER TABLE emp
	ADD CONSTRAINT dept_fk FOREIGN KEY (deptno) REFERENCES dept (deptno)
	ON UPDATE CASCADE
	ON DELETE CASCADE;
	
	

-- 213. Γράψτε την εντολή SQL, ώστε να εμφανίσετε ποιοι εργάζονται για το τμήμα πωλήσεων χωρίς να είναι πωλητές
SELECT *
FROM emp
WHERE deptno = 30 AND job != 'Πωλ';



-- 214. Γράψτε την εντολή SQL, ώστε να δημιουργήστε τον πίνακα DEPT2 από τον πίνακα dept και αλλάξτε στο νέο πίνακα το όνομα της πλειάδας JΟΒ σε ERG

-- Ο πίνακας dept δεν περιέχει την πλειάδα job. Αυτή περιέχεται στον πίνακα emp. Με βάση αυτή τη λογική θα δημιουργήσω πίνακα emp2 από τον emp...

CREATE TEMPORARY TABLE emp2 LIKE emp;
INSERT INTO emp2
	SELECT * FROM emp;
ALTER TABLE emp2
CHANGE job erg VARCHAR(45);
SELECT * FROM emp2;



-- 215. Γράψτε τις εντολές SQL , ώστε να δημιουργήσετε τη βάση δεδομένων με όνομα «BASE_1»
DROP DATABASE IF EXISTS base_1;
CREATE DATABASE base_1
	DEFAULT CHARACTER SET UTF8
  	DEFAULT COLLATE UTF8_GENERAL_CI;

CREATE TABLE emp1 (
empno int(10) unsigned NOT NULL,
ename varchar(45) DEFAULT NULL,
job varchar(45) DEFAULT NULL,
PRIMARY KEY (empno));
--      Στη συνέχεια ορίστε τη νέα βάση με όνομα «BASE_1» ως προκαθορισμένη βάση
USE base_1;
--      Να εμφανίστε την προκαθορισμένη βάση
SELECT * FROM base_1;
--      Να διαγράψετε τη βάση με όνομα «BASE_1»
DROP DATABASE if EXISTS base_1; 
-- -------------------------------------------------------------------------------------------Τέλος.