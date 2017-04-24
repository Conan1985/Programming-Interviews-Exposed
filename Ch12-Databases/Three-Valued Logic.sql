/**
PROBLEM
Given the following table
 */
DROP TABLE IF EXISTS Address;
CREATE TABLE Address (
  street CHAR(30) NOT NULL,
  apartment CHAR(10),
  city CHAR(40) NOT NULL
);
/**
Write a SQL statement that returns nonapartment address only.
 */
SELECT * FROM Address WHERE apartment ISNULL ;
