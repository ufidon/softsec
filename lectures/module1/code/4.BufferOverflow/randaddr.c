#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

void main(int argc, char **argv)
{
  char x[12];
  char *y = malloc(sizeof(char)*12);

  printf("Address of buffer x (on stack): 0x%x\n", x);
  printf("Address of buffer y (on heap): 0x%x\n", y);
}