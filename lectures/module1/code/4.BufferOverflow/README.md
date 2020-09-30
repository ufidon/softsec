# Source code for the buffer overflow attack chapter

* stack.c: The vulnerable program
* exploit.py: Create malicious badfile
* defeat_rand.sh: Defeat the address randomization countermeasure
* revised_shellcode.py: The revised shellcode that defeats the countermeasure in bash and dash. 

# References:
* [gcc - how to create a mapfile of the object file](https://stackoverflow.com/questions/38961649/gcc-how-to-create-a-mapfile-of-the-object-file)
* [Is there any disassembler to rival IDA Pro?](https://reverseengineering.stackexchange.com/questions/1817/is-there-any-disassembler-to-rival-ida-pro)
  * [ghidra](https://ghidra-sre.org/)
  * [radare](https://www.radare.org/)
  * [x64dbg](https://x64dbg.com)
  * [medusa](https://github.com/wisk/medusa)

