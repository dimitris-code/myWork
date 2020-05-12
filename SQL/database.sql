-- --------------------------------------------------------
-- Διακομιστής:                  localhost
-- Έκδοση διακομιστή:            10.3.10-MariaDB-log - mariadb.org binary distribution
-- Λειτ. σύστημα διακομιστή:     Win64
-- HeidiSQL Έκδοση:              9.5.0.5332
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


-- Dumping database structure for sample
CREATE DATABASE IF NOT EXISTS `sample` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `sample`;

-- Dumping structure for πίνακας sample.department
CREATE TABLE IF NOT EXISTS `department` (
  `deptno` char(4) NOT NULL,
  `deptname` varchar(25) NOT NULL,
  `location` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`deptno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Dumping data for table sample.department: ~3 rows (approximately)
/*!40000 ALTER TABLE `department` DISABLE KEYS */;
INSERT INTO `department` (`deptno`, `deptname`, `location`) VALUES
	('d1', 'Research', 'Dallas'),
	('d2', 'Accounting', 'Seattle'),
	('d3', 'Marketing', 'Dallas');
/*!40000 ALTER TABLE `department` ENABLE KEYS */;

-- Dumping structure for πίνακας sample.employee
CREATE TABLE IF NOT EXISTS `employee` (
  `empno` int(11) NOT NULL,
  `empfname` varchar(50) NOT NULL,
  `emplname` varchar(50) NOT NULL,
  `refid` int(11) DEFAULT NULL,
  `deptno` char(4) DEFAULT NULL,
  PRIMARY KEY (`empno`),
  KEY `FKdeptno` (`deptno`),
  KEY `FKrefid` (`refid`),
  CONSTRAINT `FKdeptno` FOREIGN KEY (`deptno`) REFERENCES `department` (`deptno`),
  CONSTRAINT `FKrefid` FOREIGN KEY (`refid`) REFERENCES `employee` (`empno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Dumping data for table sample.employee: ~11 rows (approximately)
/*!40000 ALTER TABLE `employee` DISABLE KEYS */;
INSERT INTO `employee` (`empno`, `empfname`, `emplname`, `refid`, `deptno`) VALUES
	(2581, 'Elke', 'Hansel', NULL, 'd2'),
	(9031, 'Elsa', 'Bertoni', 2581, 'd2'),
	(10102, 'Ann', 'Jones', 2581, 'd3'),
	(18316, 'John', 'Borrimore', 2581, 'd1'),
	(20000, 'Μαρία', 'Γεωργίου', 10102, 'd1'),
	(20001, 'Βασίλειος', 'Κωνσταντίνου', 9031, 'd2'),
	(20002, 'Δημήτριος', 'Παπαδόπουλος', 9031, 'd2'),
	(25348, 'Matthew', 'Smith', 10102, 'd3'),
	(28559, 'Sybill', 'Moser', 25348, 'd1'),
	(29346, 'James', 'James', 9031, 'd2'),
	(50000, 'Γιώργος', 'Ευθυμιάτος', NULL, 'd1');
/*!40000 ALTER TABLE `employee` ENABLE KEYS */;

-- Dumping structure for πίνακας sample.project
CREATE TABLE IF NOT EXISTS `project` (
  `projno` char(4) NOT NULL,
  `projname` varchar(25) NOT NULL,
  `budget` float DEFAULT NULL,
  PRIMARY KEY (`projno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Dumping data for table sample.project: ~3 rows (approximately)
/*!40000 ALTER TABLE `project` DISABLE KEYS */;
INSERT INTO `project` (`projno`, `projname`, `budget`) VALUES
	('p1', 'Apollo', 120000),
	('p2', 'Germini', 95000),
	('p3', 'Mercury', 185600);
/*!40000 ALTER TABLE `project` ENABLE KEYS */;

-- Dumping structure for πίνακας sample.works
CREATE TABLE IF NOT EXISTS `works` (
  `empno` int(11) NOT NULL,
  `projno` varchar(4) NOT NULL,
  `job` varchar(15) DEFAULT NULL,
  `enterdate` datetime DEFAULT NULL,
  PRIMARY KEY (`empno`,`projno`),
  KEY `FK2works` (`projno`),
  CONSTRAINT `FK1works` FOREIGN KEY (`empno`) REFERENCES `employee` (`empno`),
  CONSTRAINT `FK2works` FOREIGN KEY (`projno`) REFERENCES `project` (`projno`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Dumping data for table sample.works: ~13 rows (approximately)
/*!40000 ALTER TABLE `works` DISABLE KEYS */;
INSERT INTO `works` (`empno`, `projno`, `job`, `enterdate`) VALUES
	(2581, 'p3', 'Analyst', '1998-10-15 00:00:00'),
	(9031, 'p1', 'Manager', '1998-04-15 00:00:00'),
	(9031, 'p3', 'Clerk', '1997-11-15 00:00:00'),
	(10102, 'p1', 'Manager', '1997-10-01 00:00:00'),
	(10102, 'p3', 'Manager', '1999-01-01 00:00:00'),
	(18316, 'p2', NULL, '1998-01-06 00:00:00'),
	(25348, 'p2', 'Clerk', '1998-01-01 00:00:00'),
	(28559, 'p1', NULL, '1998-08-01 00:00:00'),
	(28559, 'p2', 'Clerk', '1999-02-01 00:00:00'),
	(29346, 'p1', 'Clerk', '1998-01-04 00:00:00'),
	(29346, 'p2', NULL, '1997-12-15 00:00:00'),
	(50000, 'p1', NULL, '2015-11-25 03:51:42'),
	(50000, 'p2', NULL, '2015-11-25 03:51:42');
/*!40000 ALTER TABLE `works` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
