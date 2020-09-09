#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
  char arr[64];
  char *ptr;

  if (argv[1] != NULL){
    ptr = getenv(argv[1]);
  }else{
    ptr = getenv("PWD");
  }  

  if (ptr != NULL)
  {
    sprintf(arr, "Present working directory is: %s\n", ptr);
    printf("%s\n", arr);
  }
  
  return 0;
}