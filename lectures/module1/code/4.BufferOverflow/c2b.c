#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char src[40] = "Hello world! \0 Extra string.";
    char dest[40];

    /* The following statement has a buffer overflow problem */
    strcpy(dest, src);
    
    return 1;
}