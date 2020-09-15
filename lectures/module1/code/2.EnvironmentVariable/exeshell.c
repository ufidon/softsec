#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void exeshell(char *shell){
	printf("%s is executed.\n", shell);
	system(shell);
}

int main(int argc, char* argv[], char* envp[])
{
	char *shells[] = {
		"/bin/sh",
		"/bin/bash",
		"/bin/dash",
		"/bin/dash -p",
		"/bin/zsh"
	};

	for (int i = 0; i < 5; ++i)
	{
		exeshell(shells[i]);
	}

	printf("Shell test complete.\n");
  return 0;
}