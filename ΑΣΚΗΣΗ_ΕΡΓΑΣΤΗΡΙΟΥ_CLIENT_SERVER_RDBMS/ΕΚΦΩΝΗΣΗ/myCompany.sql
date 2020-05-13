-- DIMITRIS NIKOLOPOULOS - 4Ν ΠΛΠ 01
-- CLIENT-SERVER RDBMS
-- Below I have created a database called 'myCompany' and the tables: `customers`, `details`, `employee`, `services`
-- I have inserted values for tables: `customers` and `employee`.

-- DIMITRIS NIKOLOPOULOS - 4Ν ΠΛΠ 01
-- CLIENT-SERVER RDBMS
-- Below I have created a database called 'myCompany' and the tables: `customers`, `details`, `employee`, `services`
-- I have inserted values for tables: `customers` and `employee`.


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


CREATE DATABASE IF NOT EXISTS `mycompany` 
DEFAULT CHARACTER SET utf8 DEFAULT COLLATE utf8_general_ci;

use `mycompany`;


DROP TABLE IF EXISTS `mycompany`;


-- Dumping structure for table mycompany.details
CREATE TABLE IF NOT EXISTS `details` (
  `details_id` int(11) NOT NULL AUTO_INCREMENT,
  `repair_details` varchar(255) NOT NULL,
  PRIMARY KEY (`details_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Dumping data for table mycompany.details: ~0 rows (approximately)
/*!40000 ALTER TABLE `details` DISABLE KEYS */;
INSERT INTO `details` (`details_id`, `repair_details`) VALUES
	(1, 'Device new screen'),
	(2, 'Device check power adapter');
/*!40000 ALTER TABLE `details` ENABLE KEYS */;

-- Dumping structure for table mycompany.employee
CREATE TABLE IF NOT EXISTS `employee` (
  `emp_id` int(11) NOT NULL AUTO_INCREMENT,
  `emp_fname` varchar(255) NOT NULL,
  `emp_lname` varchar(255) NOT NULL,
  PRIMARY KEY (`emp_id`)
) ENGINE=InnoDB AUTO_INCREMENT=16843 DEFAULT CHARSET=utf8;

-- Dumping data for table mycompany.employee: ~26 rows (approximately)
/*!40000 ALTER TABLE `employee` DISABLE KEYS */;
INSERT INTO `employee` (`emp_id`, `emp_fname`, `emp_lname`) VALUES
	(2500, 'John', 'Issa'),
	(3658, 'Joseph', 'Dorset'),
	(3978, 'Abigail', 'Dunkeld'),
	(6202, 'Angel', 'Balliol'),
	(6895, 'Anna', 'Normandy'),
	(7463, 'David', 'Demetrius'),
	(7658, 'David', 'Plantagenet'),
	(7659, 'Honour', 'Plantagenet'),
	(8214, 'Daphne', 'Saxe'),
	(8290, 'Timothy', 'Stuart'),
	(8325, 'James', 'Alpin'),
	(8456, 'Andrew', 'Denmark'),
	(8678, 'Channah', 'Windsor'),
	(8761, 'Ester', 'Denmark'),
	(9247, 'Keren', 'Angevin'),
	(9456, 'Stephen', 'York'),
	(9524, 'Thomas', 'Canmore'),
	(9647, 'Chloe', 'Blois'),
	(10002, 'Heloise', 'Wessex'),
	(10254, 'Adam', 'Saxe'),
	(10347, 'Jack', 'Nelson'),
	(10741, 'Daniel', 'Wright'),
	(12265, 'Lillian', 'Bruce'),
	(13547, 'Sally', 'Young'),
	(15458, 'Nathan', 'West'),
	(16842, 'Max', 'Shaw');
/*!40000 ALTER TABLE `employee` ENABLE KEYS */;

-- Dumping structure for table mycompany.services
CREATE TABLE IF NOT EXISTS `services` (
  `services_id` int(11) NOT NULL AUTO_INCREMENT,
  `cust_id` int(11) NOT NULL,
  `emp_id` int(11) NOT NULL,
  `device` varchar(255) NOT NULL,
  `repairs` varchar(255) NOT NULL,
  `details_id` int(11) NOT NULL,
  `comments` varchar(255) NOT NULL,
  `time_taken` int(11) NOT NULL,
  `updated_comments` varchar(255) NOT NULL DEFAULT 'No further actions required.',
  PRIMARY KEY (`services_id`),
  KEY `FKcust_ID` (`cust_id`),
  KEY `FKemp_ID` (`emp_id`),
  KEY `FKdetails_ID` (`details_id`),
  CONSTRAINT `FKcust_ID` FOREIGN KEY (`cust_id`) REFERENCES `customers` (`cust_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `FKdetails_ID` FOREIGN KEY (`details_id`) REFERENCES `details` (`details_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `FKemp_ID` FOREIGN KEY (`emp_id`) REFERENCES `employee` (`emp_id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Dumping data for table mycompany.services: ~0 rows (approximately)
/*!40000 ALTER TABLE `services` DISABLE KEYS */;
INSERT INTO `services` (`services_id`, `cust_id`, `emp_id`, `device`, `repairs`, `details_id`, `comments`, `time_taken`, `updated_comments`) VALUES
	(30, 1, 1, 'Samsung', 'New microphone', 1, 'Broken', 120, DEFAULT),
	(31, 2, 2, 'Sony', 'New camera', 2, 'Wet', 65, 'Reset first');
/*!40000 ALTER TABLE `services` ENABLE KEYS */;


-- Dumping structure for table mycompany.customers
CREATE TABLE IF NOT EXISTS `customers` (
  `cust_id` int(11) NOT NULL AUTO_INCREMENT,
  `emp_id` int(11) NOT NULL,
  `services_id` int(11) NOT NULL,
  `cust_VAT_number` varchar(255) NOT NULL,
  `cust_order_id` int(255) NOT NULL,
  `OrderDate` datetime DEFAULT NULL,
  `cust_fname` varchar(255) NOT NULL,
  `cust_lname` varchar(255) NOT NULL,
  `cust_address` varchar(255) DEFAULT NULL,
  `cust_street_no` varchar(255) DEFAULT NULL,
  `cust_city` varchar(255) DEFAULT NULL,
  `cust_country` varchar(255) DEFAULT NULL,
  `cust_email` varchar(320) DEFAULT NULL,
  `cust_phone_number` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`cust_id`)
  -- KEY `FKservices_ID` (`services_id`),
  -- CONSTRAINT `FKservices_ID` FOREIGN KEY (`services_id`) REFERENCES `services` (`services_id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=24 DEFAULT CHARSET=utf8;

-- Dumping data for table mycompany.customers: ~23 rows (approximately)
/*!40000 ALTER TABLE `customers` DISABLE KEYS */;
INSERT INTO `customers` (`cust_id`, `emp_id`, `services_id`, `cust_VAT_number`, `cust_order_id`, `OrderDate`, `cust_fname`, `cust_lname`, `cust_address`, `cust_street_no`, `cust_city`, `cust_country`, `cust_email`, `cust_phone_number`) VALUES
	(1, 2500, 30, 'GB123456789', 121, '1996-07-04 00:00:00', 'Maria', 'Anders', 'Obere Str.', '57', 'Kayan', 'Burma', 'mari@anders.com', '+959448111990'),
	(2, 3658, 31, 'GB454682664', 225, '1996-07-05 00:00:00', 'Ana', 'Trujillo', 'Avda. de la Constitucin', '2222', 'Mxico D.F.', 'Mexico', 'ana@trujillo.com', '011526181234567'),
	(3, 3978, 32, 'GB254854667', 253, '1996-07-08 00:00:00', 'Antonio', 'Moreno', 'Mataderos', '2312', 'Mxico D.F.', 'Mexico', 'antonio@moreno.com', '(5) 555-3932'),
	(4, 6202, 33, 'GB987533311', 260, '1996-07-08 00:00:00', 'Thomas', 'Hardy', 'Hanover sq.', '120', 'London', 'UK', 'thomas@hardy.com', '(171) 555-7788'),
	(5, 6895, 34, 'GB566555545', 265, '1996-07-09 00:00:00', 'Christina', 'Berglund', 'Berguvsvgen', '8', 'Lule', 'Sweden', 'christina@berglund.com', '0921-12 34 65'),
	(6, 7463, 35, 'GB456312548', 271, '1996-07-10 00:00:00', 'Hanna', 'Moos', 'Forsterstr.', '57', 'Mannheim', 'Germany', 'hanna@moos.com', '0621-08460'),
	(7, 7658, 36, 'GB456000123', 280, '1996-07-11 00:00:00', 'Frdrique', 'Citeaux', 'place Klber', '24', 'Strasbourg', 'France', 'frdrique@citeaux.com', '88.60.15.31'),
	(8, 7659, 37, 'GB232312145', 285, '1996-07-12 00:00:00', 'Martin', 'Sommer', 'C/ Araquil', '67', 'Madrid', 'Spain', 'martin@sommer.com', '(91) 555 22 82'),
	(9, 8214, 38, 'GB111222444', 289, '1996-07-15 00:00:00', 'Laurence', 'Lebihan', 'rue des Bouchers', '12', 'Marseille', 'France', 'laurence@lebihan.com', '91.24.45.40'),
	(10, 8290, 39, 'GB222111223', 292, '1996-07-16 00:00:00', 'Elizabeth', 'Lincoln', 'Tsawassen Blvd.', '23', 'Tsawassen', 'Canada', 'elizabeth@lincoln.com', '(604) 555-4729'),
	(11, 8325, 40, 'GB565655656', 298, '1996-07-17 00:00:00', 'Victoria', 'Ashworth', 'Fauntleroy Circus', NULL, 'London', 'UK', 'victoria@ashworth.com', '(171) 555-1212'),
	(12, 8456, 41, 'GB789789789', 300, '1996-07-18 00:00:00', 'Patricio', 'Simpson', 'Cerrito', '333', 'Buenos Aires', 'Argentina', 'patricio@simpson.com', '(1) 135-5555'),
	(13, 8678, 42, 'GB456122333', 340, '1996-07-19 00:00:00', 'Francisco', 'Chang', 'Sierras de Granada', '9993', 'Mxico D.F.', 'Mexico', 'francisco@chang.com', '(5) 555-3392'),
	(14, 8761, 43, 'GB111111222', 342, '1996-07-19 00:00:00', 'Yang', 'Wang', 'Hauptstr.', '29', 'Bern', 'Switzerland', 'yang@wang.com', '0452-076545'),
	(15, 9247, 44, 'GB999999999', 345, '1996-07-22 00:00:00', 'Pedro', 'Afonso', 'Av. dos Lusadas', '23', 'Sao Paulo', 'Brazil', 'pedro@afonso.com', '(11) 555-7647'),
	(16, 9456, 45, 'GB222222121', 347, '1996-07-23 00:00:00', 'Elizabeth', 'Brown', 'Berkeley Gardens', '12', 'London', 'UK', 'elizabeth@brown.com', '(171) 555-2282'),
	(17, 9524, 46, 'GB222222222', 348, '1996-07-24 00:00:00', 'Sven', 'Ottlieb', 'Walserweg', '21', 'Aachen', 'Germany', 'sven@ottlieb.com', '0241-039123'),
	(18, 9647, 47, 'GB555551215', 350, '1996-07-25 00:00:00', 'Janine', 'Labrune', 'rue des Cinquante Otages', '67', 'Nantes', 'France', 'janine@labrune.com', '40.67.88.88'),
	(19, 10002, 48, 'GB444545454', 355, '1996-07-26 00:00:00', 'Ann', 'Devon', 'King George', '35', 'London', 'UK', 'ann@devon.com', '(171) 555-0297'),
	(20, 10254, 49, 'GB232123112', 362, '1996-07-29 00:00:00', 'Roland', 'Mendel', 'Kirchgasse', '6', 'Graz', 'Austria', 'roland@mendel.com', '7675-3425'),
	(21, 10347, 50, 'GB444545421', 364, '1996-07-30 00:00:00', 'Aria', 'Cruz', 'Rua Ors', '92', 'Sao Paulo', 'Brazil', 'aria@cruz.com', '(11) 555-9857'),
	(22, 10741, 51, 'GB555444112', 372, '1996-07-31 00:00:00', 'Diego', 'Roel', 'C/ Moralzarzal', '86', 'Madrid', 'Spain', 'diego@roel.com', '(91) 555 94 44'),
	(23, 12265, 52, 'GB555445125', 374, '1996-08-01 00:00:00', 'Martine', 'Ranc', 'chausse de Tournai', '184', 'Lille', 'France', 'martine@ranc.com', '20.16.10.16'),
	(24, 2500, 53, 'GB123456789', 125, '1996-07-06 00:00:00', 'Maria', 'Anders', 'Obere Str.', '57', 'Kayan', 'Burma', 'mari@anders.com', '+959448111990');
/*!40000 ALTER TABLE `customers` ENABLE KEYS */;



/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
