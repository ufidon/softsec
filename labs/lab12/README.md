# its450 lectures

course materials and references for its450

This lab is revised from [SQL Injection Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Web/Web_SQL_Injection/)

Before the lab, backup original database and files.
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

**1. Tasks to be complete:**

Complete the following tasks described in [SQL Injection Attack Lab](../lab11/refs/WebSQLInjection.pdf):


- [x] Task 3 (45%): SQL Injection Attack on UPDATE Statement
- [x] Task 4 (55%): Countermeasure — Prepared Statement


**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.


**3. Demo video**


**4. References**
* [SQL Injection Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Web/Web_SQL_Injection/)
* [HTTP Header Live](https://addons.mozilla.org/en-US/firefox/addon/http-header-live/)
* [Firefox development tools](https://developer.mozilla.org/en-US/docs/Tools)
* [Chrome Devtools](https://developers.google.com/web/tools/chrome-devtools)
* [Elgg](https://en.wikipedia.org/wiki/Elgg_(software))
  * [elgg](https://elgg.org/)
* [MySQL](https://en.wikipedia.org/wiki/MySQL)
  * [mysql](https://www.mysql.com/)
* [SQL](https://en.wikipedia.org/wiki/SQL)
  * [SQL syntax](https://en.wikipedia.org/wiki/SQL_syntax)