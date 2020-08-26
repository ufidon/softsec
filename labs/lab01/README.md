# its450 lectures

course materials and references for its450

## Lab01: Setup the lab environment

__Description__

Setup the lab environment and get familiar with the SEED VM. You need a USB 3.0+ thumb drive or USB 3.0+ SSD with at least 256GB or install on your own laptop with free space of at least 256GB.

* *Rule of thumb to choose software: always choose the latest and STABLE version*
* Download and install [VirtualBox](https://www.virtualbox.org/) and the extension pack
* Download the [SEED VM](https://seedsecuritylabs.org/) form its official website
* Read the [SEED manuals](https://seedsecuritylabs.org/lab_env.html)
* Setup a virtual NAT network with the SEED VM
  * NAT network settings:
    * Disable IPv6
    * Network ID: 10.20.30.0
  * VM settings:
    * 1GB memory
    * Connect to the NAT network
    * It is a best practice to set VM's IP address statically
    * Enable network promiscuous mode
* Browse and play with the integrated software
* Practice the basic Linux commands on the [Linux command memento](https://bootlin.com/doc/legacy/command-line/)

	
__Report__

Write a report about:

* the process you setup the lab environment (VM summary is sufficient)
* the process you test the NAT network
* the process you setup and test the shared folder

__References__
* [VirtualBox](https://www.virtualbox.org/)
* [SEED security labs](https://seedsecuritylabs.org/)
* [Hands on security](https://www.handsonsecurity.net/)
* [bootlin](https://bootlin.com)
