#include <stdio.h>

// environment variables passed from the global variable environ
extern char** environ;

void main(int argc, char* argv[], char* envp[])
{
  int i = 0;
  while (environ[i] != NULL)
  {
    printf("%s\n", environ[i++]);
  }  
}