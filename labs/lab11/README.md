# its450 lectures

course materials and references for its450

This lab is revised from [SQL Injection Attack Lab 2.0](https://seedsecuritylabs.org/Labs_20.04/Web/Web_SQL_Injection/)

**1. Tasks to be complete:**

Complete the following tasks described in [SQL Injection Attack Lab 2.0](./refs/WebSQLInjection.pdf):


- [x] Task 1 (40%): Get Familiar with SQL Statements
  - [X] (10%) Login MySQL from terminal as root
  - [X] (10%) Find and use the database for this lab
  - [X] (20%) Find the tables and show all records of this database
- [x] Task 2 (60%): SQL Injection Attack on SELECT Statement
  - [X] Task 2.1 (15%): SQL injection attack from webpage.
  - [X] Task 2.2 (15%): SQL injection attack from command line.
  - [X] Task 2.3 (30%): Append a new SQL statement.

**Tips**

How to backup and restore original database and files.
1. Backup and restore database in a terminal
   * Backup: 
```mysql   
   mysqldump -u [username] -p [database name] > [database name].sql
   # For example: 
   mysqldump -u root -p Users > users.sql
```   
   * Restore: 
```mysql   
   mysql -u [username] -p targetdatabase < [database name].sql
   # For example: 
   mysql -u root -p Users < users.sql
```   
2. Backup and restore php source file
   * Backup: 
```bash   
   sudo cp /var/www/SQLInjection/unsafe_home.php /var/www/SQLInjection/unsafe_home.php.bk
```   
   * Restore: 
```bash   
   sudo cp /var/www/SQLInjection/unsafe_home.php.bk /var/www/SQLInjection/unsafe_home.php
```

**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.


**3. Demo video**
* [SEED SQL Injection Attack I 2.0]()
* [SEED SQL Injection Attack I 1.0](https://youtu.be/LXP_hbc7DJY)

**4. References**
* [SQL Injection Attack Lab 2.0](https://seedsecuritylabs.org/Labs_20.04/Web/Web_SQL_Injection/)
* [SQL Injection Attack Lab 1.0](https://seedsecuritylabs.org/Labs_16.04/Web/Web_SQL_Injection/)
* [HTTP Header Live](https://addons.mozilla.org/en-US/firefox/addon/http-header-live/)
* [Firefox development tools](https://developer.mozilla.org/en-US/docs/Tools)
* [Chrome Devtools](https://developers.google.com/web/tools/chrome-devtools)
* [Elgg](https://en.wikipedia.org/wiki/Elgg_(software))
  * [elgg](https://elgg.org/)
* [MySQL](https://en.wikipedia.org/wiki/MySQL)
  * [mysql](https://www.mysql.com/)
* [PHP mysqli](https://www.php.net/manual/en/class.mysqli.php)
  * [mysqli::query](https://www.php.net/manual/en/mysqli.query.php)
  * [mysqli::multi_query](https://www.php.net/manual/en/mysqli.multi-query.php)
* [SQL](https://en.wikipedia.org/wiki/SQL)
  * [SQL syntax](https://en.wikipedia.org/wiki/SQL_syntax)
* [Percent encoding](https://en.wikipedia.org/wiki/Percent-encoding)
  * [Url encoder and decoder](https://www.urlencoder.org/)
* [Character encodings in HTML](https://en.wikipedia.org/wiki/Character_encodings_in_HTML)
  * [html-entity-encode](https://devpal.co/html-entity-encode/)
  * [html-entities-encoder-and-decoder](https://www.web2generators.com/html-based-tools/online-html-entities-encoder-and-decoder)
* [MySQL: How to Import and Export Databases](https://www.digitalocean.com/community/tutorials/how-to-import-and-export-databases-and-reset-a-root-password-in-mysql)