#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
  system("/bin/dash");
  return 0;
}