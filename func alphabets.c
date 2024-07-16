/*write a program tha accepts a variable type character
and it prints whether it is a vowel or a consonant*/
#include <stdio.h>

char alphabet(char letter);

int main()
{
	char letter;
	printf("Enter a character:");
	scanf("%c",&letter);
	alphabet(letter);
	return 0;
}
char alphabet(char letter){
	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
		printf ("%c is a vowel",letter);
	}
	else{
		printf("%c is a consonant",letter);
	}
}