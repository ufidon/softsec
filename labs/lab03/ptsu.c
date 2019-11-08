#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main()
{
    system("ls");
    return 0;
}
