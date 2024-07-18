/*You are given a string mixed with uppercases and lowercases
Write a program rthat will flip the letters
uppercase to lowercase or lowercase to uppercase*/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int i;
	printf("Enter a word: ");
	scanf("%s",&str);
	if(str[0]>=97 && str[0]<=122){
		str[0]=str[0]-32;
		printf("%c",str[0]);
	}
	for(i=1;i<strlen(str);i++){
		if(str[i]>65 && str[i]<=91){
			printf("%c",str[i]+32);
		}
		else{
			printf("%c",str[i]);
		}
	}
	return 0;
}
