#include <stdio.h>
// environment variables passed from main function
void main(int argc, char* argv[], char* envp[])
{
  int i = 0;
  while (envp[i] != NULL)
  {
    printf("%s\n", envp[i++]);
  }  
}