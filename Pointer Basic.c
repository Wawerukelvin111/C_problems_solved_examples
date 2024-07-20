/*Take an integer variable named X and assign X=5 
Now print its memory address*/
#include <stdio.h>

int main()
{
	int X;
	X=5;
	printf("Memory address=%u",&X);
	return 0;
}
