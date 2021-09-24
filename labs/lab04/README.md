# its450 lectures

course materials and references for its450

This lab is revised from [SEED 2.0 Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Shellshock/)

**1. Tasks to be complete:**

Complete the following tasks described in [SEED 2.0 Shellshock Attack Lab](./refs/Shellshock.pdf):

- [x] Task 1(30%): Experimenting with Bash Function
- [x] Task 2(30%): Passing Data to Bash via Environment Variable
- [x] Task 3(30%): Launching the Shellshock Attack
- [ ] Task 4: Getting a Reverse Shell via Shellshock Attack
- [ ] Task 5: Using the Patched Bash


**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.

*Review questions (10%)*

The review questions are taken from the tasks, you may put and answer the review questions in the section of review questions *or in its respective tasks, if so, please highlight them with green color*.

* **Task 3 Question 2 reference answer**: web url can NOT accept the blank space existed in shell function definition starting string '() {', it must be encoded into URL code which is %20B, other special characters also need url encoding. Send the encoded request to getenv.cgi, we can see %20B from the shell function definition starting string is NOT converted back to blank space, so the purpose of sending a shell function definition failed, i.e. shellshock attack can not be launched through url.

**3. Demo video**
* [A quick demo: Lab04 SEED 2.0 Shellshock Attack Lab Part1](https://youtu.be/4czL8W5n3go)
* [A quick demo: Lab04 SEED 1.0 Shellshock Attack Lab Part1](https://youtu.be/ZYMmLE1NgYs)

**4. References**
* [SEED 2.0 Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Shellshock/)
* [SEED 1.0 Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Shellshock/)
* [Shellshock (software bug)](https://en.wikipedia.org/wiki/Shellshock_(software_bug))
  * [CVE-2014-6271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2014-6271)
  * [Alert (TA14-268A)](https://us-cert.cisa.gov/ncas/alerts/TA14-268A)
  * [CVE-2014-6271 Detail](https://nvd.nist.gov/vuln/detail/CVE-2014-6271)
* [netcat](https://en.wikipedia.org/wiki/Netcat)
* [How To Customize Bash Prompt in Linux](https://phoenixnap.com/kb/change-bash-prompt-linux)
* Client URL
  * [cURL](https://en.wikipedia.org/wiki/CURL)
    * [curl](https://curl.haxx.se/)
    * [source code](https://github.com/curl/curl)
    * [https://curl.haxx.se/docs/comparison-table.html](https://curl.haxx.se/docs/comparison-table.html)
* [How to Resolve “Temporary failure in name resolution” Issue](https://www.tecmint.com/resolve-temporary-failure-in-name-resolution/)
* [How to fix docker: Got permission denied while trying to connect to the Docker daemon socket](https://www.digitalocean.com/community/questions/how-to-fix-docker-got-permission-denied-while-trying-to-connect-to-the-docker-daemon-socket)