/*write a program that takes the input from the user
and prints the output with each letter in a separate line*/
#include <stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[100];
	printf("Enter a country name:\n");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){//strlen determines the size of string
		printf("%c\n",str[i]);//prints each character on a separate line
	}
	return 0;
}
