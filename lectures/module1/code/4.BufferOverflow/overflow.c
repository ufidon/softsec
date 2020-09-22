/* This program has a buffer overflow vulnerability. */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void foo(char *str)
{
    char buffer[12];

    /* The following statement has a buffer overflow problem */
    strcpy(buffer, str);
}

int main(int argc, char **argv)
{
    char *str = "This is definitely longer than 12 bytes.";

    foo(str);

    return 1;
}