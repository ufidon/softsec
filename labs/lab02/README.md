# its450 lectures

course materials and references for its450

This lab is revised from [SEED 2.0 Environment Variable and Set-UID Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Environment_Variable_and_SetUID/)

**1. Tasks to be complete:**

Complete the following tasks described in [SEED 2.0 Environment Variable and Set-UID Lab](./refs/EnvironmentVariableandSetUID.pdf):

- [x] Task 1(16%): Manipulating Environment Variables
- [x] Task 2(16%): Passing Environment Variables from Parent Process to Child Process
- [x] Task 3(16%): Environment Variables and execve()
- [x] Task 4(16%): Environment Variables and system()
- [ ] Task 5: Environment Variable and Set-UID Programs
- [ ] Task 6: The PATH Environment Variable and Set-UID Programs
- [ ] Task 7: The LD_PRELOAD Environment Variable and Set-UID Programs
- [ ] Task 8: Invoking External Programs Using system() versus execve()
- [x] Task 9(16%): Capability Leaking

**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.

*(20%)Review questions*

The review questions are taken from the tasks, you may put and answer the review questions in the section of review questions *or in its respective tasks, if so, please hightlight them with green color*.
1. (10%)In task 3, we are interested in what happens to the environment variables; are they automatically inherited by the new program? why?
2. (10%)In task 9, Will the file /etc/zzz be modified? why?

**3. Demo video**
* [SEED 2.0 Environment Variable and Set-UID Program Lab 1](https://youtu.be/5rxjcMZujYI)
* [SEED 1.0 Environment Variable and Set-UID Program Lab 1](https://youtu.be/b\_aOc-3QY40)

**4. References**
* [SEED 2.0 Environment Variable and Set-UID Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Environment_Variable_and_SetUID/)
* [SEED 1.0 Environment Variable and Set-UID Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/)
* [Setuid](https://en.wikipedia.org/wiki/Setuid)
* [setuid](http://manpages.ubuntu.com/manpages/focal/man1/setuid.1.html)
* [Setuid Program Example](https://www.gnu.org/software/libc/manual/html\_node/Setuid-Program-Example.html)
* [Linux list processes by user names (EUID and RUID)](https://www.cyberciti.biz/faq/linux-list-processes-by-user-names-euid-and-ruid/)