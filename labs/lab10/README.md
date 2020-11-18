# its450 lectures

course materials and references for its450

This lab is revised from [Cross-Site Scripting Attack Lab (Elgg)](https://seedsecuritylabs.org/Labs_16.04/Web/Web_XSS_Elgg/)

**1. Tasks to be complete:**

Complete the following tasks described in [Cross-Site Scripting Attack Lab (Elgg)](../lab09/refs/WebXSSElggnew.pdf):


- [x] Task 6 (55%): Writing a Self-Propagating XSS Worm
* (20%)Link method 
* (15%)DOM method 
* (20%)Applying countermeasure such as activating plugin HTMLawed. Show link method OR DOM method failed after activated plugin HTMLawed.
- [x] Task 7 (45%): Defeating XSS Attacks Using CSP


*How to remove oneself from his/her friend list?*

```sql
# 1. open a terminal, login into MySQL
mysql -u root -p'seedubuntu'

# 2. Find the target database
show databases;

# 3. use the target database
use elgg_xss;

# 4. find the target table
show tables;

# 5. find those guid friend guid, i.e. those are friends of themselves
select * from elgg_xssentity_relationships;

# 6. delete the rows with guid friend guid, e.g. 47 friend 47
# replace ?? below with yours, ATTN: id is NOT guid
delete from elgg_xssentity_relationships where id=??;
```

**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.


**3. Demo video**

*Pay attention to the lab tasks, countermeasure is required. not only FYI*

* [Cross-Site Scripting Attack Lab II](https://youtu.be/Xh8OXe11-4Q)

**4. References**
* [Cross-Site Scripting Attack Lab (Elgg)](https://seedsecuritylabs.org/Labs_16.04/Web/Web_XSS_Elgg/)
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