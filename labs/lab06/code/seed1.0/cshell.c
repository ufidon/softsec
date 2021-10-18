// Task 1. shellcode in C

#include <stdio.h>
#include <unistd.h>

int main(){
  char * name[2];

  name[0] = "/bin/sh";
  name[1] = NULL;
  execve(name[0], name, NULL);
}