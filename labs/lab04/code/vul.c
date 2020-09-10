#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
	setuid(geteuid());
	system("/bin/ls -l");

	return 0;
}