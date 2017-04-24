/**
PROBLEM
You are given a data base with the following tables.
You may make the assumption that the only possible fiscal quarters are 1 through 4.
 */

DROP TABLE IF EXISTS Company;
CREATE TABLE Company(
  companyName CHAR(30),
  	id INTEGER(4) PRIMARY KEY
  );
DROP TABLE IF EXISTS EmployeesHired;
CREATE TABLE EmployeesHired (
	id INTEGER(4),
	numHired INTEGER(4),
	fiscalQuarter INTEGER(4),
	FOREIGN KEY (id) REFERENCES Company
  );
INSERT INTO Company VALUES ('Hillary Plumbing', 6);
INSERT INTO Company VALUES ('John Lawn Company', 9);
INSERT INTO Company VALUES ('Dave Cookie Company', 19);
INSERT INTO Company VALUES ('Jane Electricity', 3);
INSERT INTO EmployeesHired VALUES (3,3,3);
INSERT INTO EmployeesHired VALUES (3,2,4);
INSERT INTO EmployeesHired VALUES (19,4,1);
INSERT INTO EmployeesHired VALUES (6,2,1);

/**
Write a SQL statement that returns the names of all the companies that hired employees in fiscal quarter 4.
 */
SELECT companyName FROM Company, EmployeesHired
WHERE company.id = EmployeesHired.id AND fiscalQuarter = 4
AND numHired>0;

/**
Now, using the same schema, write a SQL statement that returns the names of all companies that did not hire anyone in
fiscal quarters 1 through 4.
 */
SELECT companyName FROM Company where id NOT IN
                                      (SELECT id FROM EmployeesHired WHERE numHired > 0);

/**
Finally, return the names of all companies and the total number of employees that each company hired during fiscal
quarters 1 through 4.
 */
SELECT companyName, COALESCE(SUM(numHired), 0)
FROM Company LEFT OUTER JOIN EmployeesHired
  ON company.id = EmployeesHired.id
GROUP BY companyName;
