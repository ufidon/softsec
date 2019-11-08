/* mycal.c */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *cal="/usr/bin/cal";

  if(argc < 2) {
    printf("What year do you want to show its calendar? Usage: ./mycal 2016.\n");
    return 1;
  }

  char *command = malloc(strlen(cal) + strlen(argv[1]) + 2);
  sprintf(command, "%s %s", cal, argv[1]);
  system(command);
  return 0 ;
}

