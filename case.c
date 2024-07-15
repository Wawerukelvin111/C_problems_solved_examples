/*write a function toUpperCasewhich takes a snmalll letter alphabet as input
and returns its capital version*/
#include <stdio.h>

int toUpperCase(char alphabet){
	int convert;
	convert=alphabet;
	convert=convert-32;
	return convert;
}

int main()
{
	char alphabet;
	printf("Enter an alphabet:\t");
	scanf("%c",&alphabet);
	printf("\nThe capital of %c is %c",alphabet,toUpperCase(alphabet));
	return 0;
}
