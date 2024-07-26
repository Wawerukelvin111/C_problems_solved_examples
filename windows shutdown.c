#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("c:\\windows\\system32\\shutdown /i");
	return 0;
}
/*The idea is to use system() in C. 
This function is used to invoke operating system commands from C program.*/

/*To perform different operations, we just replace the last “/path” in system() argument.The common operations are:
Shutdown
system("c:\\windows\\system32\\shutdown /s");
Restart
system("c:\\windows\\system32\\shutdown /r");
Logoff
system("c:\\windows\\system32\\shutdown /l");
*/