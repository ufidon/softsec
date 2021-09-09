#include <stdio.h>
#include <stdlib.h>

// environment variables passed from the global variable environ
extern char** environ;

void main(int argc, char* argv[], char* envp[])
{
  int i = 0;
  printf("\n====environment variables listed with environ: %X====\n\n", environ);
  while (environ[i] != NULL)
  {
    printf("%s\n", environ[i++]);
  }
  i = 0;  
  printf("\n====environment variables listed with envp: %X====\n\n", envp);
  while (envp[i] != NULL)
  {
    printf("%s\n", envp[i++]);
  }

  // add an environment variable
  setenv("MYVAR", "My variable!!!!", 1);
  i = 0;
  printf("\n====environment variables listed with environ: %X====\n\n", environ);
  while (environ[i] != NULL)
  {
    printf("%s\n", environ[i++]);
  }
  i = 0;  
  printf("\n====environment variables listed with envp: %X====\n\n", envp);
  while (envp[i] != NULL)
  {
    printf("%s\n", envp[i++]);
  }
}