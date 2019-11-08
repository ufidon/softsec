#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Dynamic linker attack
*/
int main(int argc, char *argv[], char *envp[])
{
	int seconds = 0;
	if(argc < 2) {
	    printf("How many seconds do you want pause? Usage: ./mypause 2\n");
	    return 1;
  	}

  	seconds = atoi(argv[1]);
  	printf("I will pause %d seconds now...\n", seconds );
	sleep(seconds);	
	printf("I'm back to the test!\n");

	return 0;
}