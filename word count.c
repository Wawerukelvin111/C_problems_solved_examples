/*write a program whch takes a sentence as input and 
prints the number of words in the sentence*/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int i,word_count=1;
	printf("Write a Sentence below:\n");
	scanf("%c",&str);
	for(i=0;i<strlen(str);i++){
		if(str[i]==' '){
			word_count++;
		}
	}
	printf("%d\n",word_count);

	return 0;
}
