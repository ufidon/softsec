#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

void main(int argc, char **argv)
{
  char *name[2];

  name[0] = "/bin/sh";
  name[1] = NULL;

  execve(name[0], name, NULL); 
}