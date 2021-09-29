# its450 lectures

course materials and references for its450

This lab is revised from [SEED 2.0 Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Shellshock/)

**1. Tasks to be complete:**

Complete the following tasks described in [SEED 2.0 Shellshock Attack Lab](../lab04/refs/Shellshock.pdf):

- [ ] Task 1: Experimenting with Bash Function
- [ ] Task 2: Setting up CGI programs
- [ ] Task 3: Passing Data to Bash via Environment Variable
- [x] Task 4(50%): Getting a Reverse Shell via Shellshock Attack
- [x] Task 5(40%): Using the Patched Bash


**2. Report**

Write a report about the process you complete the tasks in the description, key screen snapshots are needed as evidences. In your report, each task has its own subsection.

*Review questions (10%)*

The review questions are taken from the tasks, you may put and answer the review questions in the section of review questions *or in its respective tasks, if so, please highlight them with green color*.

*nc -lv 9090 name resolving problem*

The error of "nc: getnameinfo: Temporary failure in name resolution" when you run "nc -lv 9090", can be solved by 

```bash
# 1. appending the following two lines to the domain name resolving configuration file /etc/resolv.conf
nameserver 10.20.30.1 # change to your VM gateway, find it with ip route inside your VM
nameserver 8.8.4.4

# 2. restart the domain name resolving service
sudo systemctl restart systemd-resolved.service
```

**3. Demo video**
* [SEED 2.0 Shell shock Attack Lab Part 2](https://youtu.be/uiJffB0nw0U)
* [SEED 1.0 Shell shock Attack Lab Part 2](https://youtu.be/3Ov-DLguK_g)

**4. References**
* [SEED 2.0 Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_20.04/Software/Shellshock/)
* [SEED 1.0 Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Shellshock/)
* [Shellshock (software bug)](https://en.wikipedia.org/wiki/Shellshock_(software_bug))
  * [CVE-2014-6271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2014-6271)
  * [Alert (TA14-268A)](https://us-cert.cisa.gov/ncas/alerts/TA14-268A)
  * [CVE-2014-6271 Detail](https://nvd.nist.gov/vuln/detail/CVE-2014-6271)
* [netcat](https://en.wikipedia.org/wiki/Netcat)
* [PHP Predefined Variables](https://www.php.net/manual/en/reserved.variables.php)
* [SSH Tunnel - Local and Remote Port Forwarding Explained With Examples](https://blog.trackets.com/2014/05/17/ssh-tunnel-local-and-remote-port-forwarding-explained-with-examples.html)
* [SSH Port Forwarding Example](https://www.ssh.com/ssh/tunneling/example)
* [SSH/OpenSSH/PortForwarding](https://help.ubuntu.com/community/SSH/OpenSSH/PortForwarding)
* [A Guide to SSH Port Forwarding/Tunnelling](https://www.booleanworld.com/guide-ssh-port-forwarding-tunnelling/)
* [netcat nc: getnameinfo: Temporary failure in name resolution](https://unix.stackexchange.com/questions/592086/netcat-nc-getnameinfo-temporary-failure-in-name-resolution)