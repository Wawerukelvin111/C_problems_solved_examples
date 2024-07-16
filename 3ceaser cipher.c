/*write a program which takes a string of alphabet as input 
and replaces all the characters with theb third immediate character of it
all the alphabets of the input will be small respect.for example
if a user inputs abc it should print def 
if a user inputs xyz it prints abc*/
#include <stdio.h>
#include<string.h>
int main()
{
	char str[200];
	int i;
	printf("Enter your characters:");
	scanf("%s",&str);
	for(i=0;i<=strlen(str);i++){
		if(str[i]>=120 && str[i]<=123){
			printf("%c",str[i]-23);
		}
		else {
			printf("%c",str[i]+3);
		}
	}

	return 0;
}
