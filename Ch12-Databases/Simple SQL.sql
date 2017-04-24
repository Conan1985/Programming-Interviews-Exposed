/**
PROBLEM
Given a database with the table
write a SQL statement to insert Montreal and 1976 into the database.
 */
DROP TABLE IF EXISTS Olympics;
CREATE TABLE Olympics(
  city CHAR(16),
  year INTEGER(4)
  );
INSERT INTO Olympics VALUES ('Montreal', 1976);
