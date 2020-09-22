#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// initialize globals, in data segment
int gx = 0x11111111;

// uninitialized globals, ?
int gy;

// functions
int sum(int x, int y){
  int s = x+y;
  return s;
}

int main(int argc, char* argv[], char* envp[])
{
  // initialized local variables, in stack
  int sa = 0x22222222;
  float sb = 300.0;

  // uninitialized local variables, ?
  int usa, usb;

  // uninitialized statics, in BSS
  static int jy;

  // initialized statics, ?
  static int jz = 0x99999999;

  // dynamically allocated memory, in heap
  int *ptr = (int*)malloc(2*sizeof(int));
  ptr[0] = 0x55aa55aa;
  ptr[1] = 0x11223344;

  usa = usb = sum(ptr[0], ptr[1]);
  
  free(ptr);

  return 0;
}