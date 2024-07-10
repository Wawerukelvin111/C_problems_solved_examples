//create a program thatakes the string input from a user 
//take the string and print its reverse as outpu
#include <stdio.h>
#include <string.h>//contains library and functions for string operations
int main()
{
	char str[100];//a character array of 100
	int  length,i;
	printf("Enter a word:\n");
	scanf("%s",&str);//user inputs
	length=strlen(str);//determining the length of the string
	
	for(i=length;i>=0;i--){//reversing the position of the characters
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
