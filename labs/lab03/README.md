# its450 lectures

course materials and references for its450

This lab is revised from [SEED 2.0 Environment Variable and Set-UID Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Environment_Variable_and_SetUID/)

**1. Tasks to be complete:**

Complete the following tasks described in [SEED 2.0 Environment Variable and Set-UID Lab](../lab02/refs/EnvironmentVariableandSetUID.pdf):

- [ ] Task 1: Manipulating Environment Variables
- [ ] Task 2: Passing Environment Variables from Parent Process to Child Process
- [ ] Task 3: Environment Variables and execve()
- [ ] Task 4: Environment Variables and system()
- [x] Task 5(20%): Environment Variable and Set-UID Programs
- [x] Task 6(20%): The PATH Environment Variable and Set-UID Programs
- [x] Task 7(20%): The LD_PRELOAD Environment Variable and Set-UID Programs
- [x] Task 8(20%): Invoking External Programs Using system() versus execve()
- [ ] Task 9: Capability Leaking

**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.

*(20%)Review questions*

The review questions are taken from the tasks, you may put and answer the review questions in the section of review questions *or in its respective tasks, if so, please hightlight them with green color*.
1. (10%)In task 6, Can you let this Set-UID program run your code instead of /bin/ls? If you can, is your code running
with the root privilege? Describe and explain your observations.

2. (10%)In task 8, Do your attacks in Step 1 still work? Please describe and explain your observations.


**3. Demo video**
* [SEED 2.0 Environment Variable and Set-UID Program Lab 2]()
* [SEED 1.0 Environment Variable and Set-UID Program Lab 2](https://youtu.be/EqpVNQ888vg)

**4. References**
* [SEED 2.0 Environment Variable and Set-UID Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Environment_Variable_and_SetUID/)
* [SEED 1.0 Environment Variable and Set-UID Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/)
* [Setuid](https://en.wikipedia.org/wiki/Setuid)
* [setuid](http://manpages.ubuntu.com/manpages/focal/man1/setuid.1.html)
* [Setuid Program Example](https://www.gnu.org/software/libc/manual/html\_node/Setuid-Program-Example.html)
* [Linux list processes by user names (EUID and RUID)](https://www.cyberciti.biz/faq/linux-list-processes-by-user-names-euid-and-ruid/)