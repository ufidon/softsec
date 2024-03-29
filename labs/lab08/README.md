# its450 lectures

course materials and references for its450

This lab is revised from [SEED 2.0 Cross-Site Request Forgery Attack Lab](https://seedsecuritylabs.org/Labs_20.04/Web/Web_CSRF_Elgg/)

**1. Tasks to be complete:**

Complete all tasks described in [SEED 2.0 Cross-Site Request Forgery Attack Lab](./refs/WebCSRFElgg.pdf):

- [x] Task 1 (10%): Observing HTTP Request.
- [x] Task 2 (20%): CSRF Attack using GET Request
- [x] Task 3 (30%): CSRF Attack using POST Request
- [x] Task 4 (20%): Enabling Elgg’s Countermeasure
- [x] Task 5 (20%): Experimenting with the SameSite Cookie Method

**Tips**

```bash
# 1. Remove all containers
docker rm -vf $(docker ps -a -q)
# 2. Remove all images
docker rmi -f $(docker images -a -q)
```


**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection. Answer all review questions in each task.


**3. Demo video**
* [SEED 2.0 CSRF Attack Lab](https://youtu.be/cXGU1zLfCWc)
* [SEED 1.0 CSRF Attack Lab](https://youtu.be/Hf6We9DRjnM)

**4. References**
* [SEED 2.0 Cross-Site Request Forgery Attack Lab](https://seedsecuritylabs.org/Labs_20.04/Web/Web_CSRF_Elgg/)
* [SEED 1.0 Cross-Site Request Forgery Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Web/Web_CSRF_Elgg/)
* [HTTP Header Live](https://addons.mozilla.org/en-US/firefox/addon/http-header-live/)
* [Firefox development tools](https://developer.mozilla.org/en-US/docs/Tools)
* [Chrome Devtools](https://developers.google.com/web/tools/chrome-devtools)
* [Elgg](https://en.wikipedia.org/wiki/Elgg_(software))
  * [elgg](https://elgg.org/)
* [Docker: How to delete all local Docker images](https://stackoverflow.com/questions/44785585/docker-how-to-delete-all-local-docker-images)
* _csrf countmeasures_
  * [Cross-site request forgery](https://en.wikipedia.org/wiki/Cross-site_request_forgery)
    * [Cross-Site Request Forgery Prevention Cheat Sheet](https://cheatsheetseries.owasp.org/cheatsheets/Cross-Site_Request_Forgery_Prevention_Cheat_Sheet.html)
  * [SameSite](https://owasp.org/www-community/SameSite)
    * [SameSite is NOT Same-origin policy](https://en.wikipedia.org/wiki/Same-origin_policy)
      * [The Same-Origin Policy](https://www.aosabook.org/en/500L/the-same-origin-policy.html)
  * [HTTP referer](https://en.wikipedia.org/wiki/HTTP_referer)
  * [Synchronizer token pattern (STP) or CSRF tokens](https://portswigger.net/web-security/csrf/tokens)