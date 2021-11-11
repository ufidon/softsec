# its450 lectures

course materials and references for its450

This lab is revised from [SEED 2.0 Cross-Site Scripting Attack Lab (Elgg)](https://seedsecuritylabs.org/Labs_20.04/Web/Web_XSS_Elgg/)

**1. Tasks to be complete:**

Complete the following tasks described in [SEED 2.0 Cross-Site Scripting Attack Lab (Elgg)](../lab09/refs/WebXSSElgg.pdf):

*admin password: seedadmin*

- [x] Task 6 (50%): Writing a Self-Propagating XSS Worm
  * (25%)Link method 
  * (25%)DOM method 
- [x] Task 7 (50%): Defeating XSS Attacks Using CSP. Each subtask counts for 10%.
  * Describe and explain your observations when you visit these websites.
  * Click the button in the web pages from all the three websites, describe and explain your observations.
  * Change the server configuration on example32b (modify the Apache configuration), so Areas 5 and 6 display OK. Please include your modified configuration in the lab report.
  * Change the server configuration on example32c (modify the PHP code), so Areas 1, 2, 4, 5, and 6 all display OK. Please include your modified configuration in the lab report.
  * Please explain why CSP can help prevent Cross-Site Scripting attacks.


*How to remove oneself from his/her friend list?*

```sql
# 1. open a terminal, login into MySQL
mysql -u root -p'dees'

# 2. Find the target database
show databases;

# 3. use the target database
use elgg_seed;

# 4. find the target table
show tables;

# 5. find those guid friend guid, i.e. those are friends of themselves
select * from elgg_entity_relationships;

# 6. delete the rows with guid friend guid, e.g. 47 friend 47
# replace ?? below with yours, ATTN: id is NOT guid
delete from elgg_entity_relationships where id=??;
```

**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.


**3. Demo video**

*Pay attention to the lab tasks, countermeasure in Task 6 is required. not only FYI*

* [SEED 2.0 Cross-Site Scripting Attack Lab II]()
* [SEED 1.0 Cross-Site Scripting Attack Lab II](https://youtu.be/Xh8OXe11-4Q)

**4. References**
* [SEED 2.0 Cross-Site Scripting Attack Lab (Elgg)](https://seedsecuritylabs.org/Labs_20.04/Web/Web_XSS_Elgg/)
* [SEED 1.0 Cross-Site Scripting Attack Lab (Elgg)](https://seedsecuritylabs.org/Labs_16.04/Web/Web_XSS_Elgg/)
* [HTTP Header Live](https://addons.mozilla.org/en-US/firefox/addon/http-header-live/)
* [Firefox development tools](https://developer.mozilla.org/en-US/docs/Tools)
* [Chrome Devtools](https://developers.google.com/web/tools/chrome-devtools)
* [Elgg](https://en.wikipedia.org/wiki/Elgg_(software))
  * [elgg](https://elgg.org/)
* [jsoup](https://jsoup.org/)
* [htmLawed](https://www.bioinformatics.org/phplabware/internal_utilities/htmLawed/)
* [htmlspecialchars](https://www.php.net/manual/en/function.htmlspecialchars.php)
* [Content Security Policy](https://en.wikipedia.org/wiki/Content_Security_Policy)
  * [Content Security Policy (CSP)Quick Reference Guide](https://content-security-policy.com/)
    * [CSP Examples](https://content-security-policy.com/examples/)
      * [Adding a CSP header with htaccess](https://content-security-policy.com/examples/htaccess/)
      * [CSP PHP Example](https://content-security-policy.com/examples/php/)
    * [Using a hash with CSP](https://content-security-policy.com/hash/)
  * [Content-Security-Policy](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy)
  * [How to create a solid and secure Content Security Policy](https://www.uriports.com/blog/creating-a-content-security-policy-csp/)
* [Character encodings in HTML](https://en.wikipedia.org/wiki/Character_encodings_in_HTML)
  * [html-entity-encode](https://devpal.co/html-entity-encode/)
  * [html-entities-encoder-and-decoder](https://www.web2generators.com/html-based-tools/online-html-entities-encoder-and-decoder)