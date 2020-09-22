
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  char *argv[2];
  argv[0] = "/bin/sh";
  argv[1] = NULL;

  setuid(0); // set real uid to 0 (root)
  execve(argv[0], argv, NULL);
  
  return 1;
}