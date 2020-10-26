#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main(void){

	char* params[2];
	params[0] = "/usr/bin/id";
	params[1] = 0;

	setuid(0);
	execve(params[0], params, NULL);
}