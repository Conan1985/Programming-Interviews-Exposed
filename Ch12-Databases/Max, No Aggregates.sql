/**
PROBLEM
Given the following SQL database schema
 */
DROP TABLE IF EXISTS Test;
CREATE TABLE Test (
  num INTEGER(4)
);
INSERT INTO Test VALUES (5);
INSERT INTO Test VALUES (23);
INSERT INTO Test VALUES (-6);
INSERT INTO Test VALUES (7);
/**
Write a SQL statement that returns the maximum value from num without using an aggregate (MAX, MIN, etc.).
 */
SELECT num FROM Test WHERE num NOT IN
                           (SELECT Lesser.num from Test AS Lesser, Test AS Greater WHERE Lesser.num < Greater.num);
