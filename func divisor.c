/*Write a function that takes an integer as inputs
and prints all its divisors 
call this from the main function*/

#include <stdio.h>

void divisor(int value){
	int i;
	for(i=1;i<=value;i++){
		if(value%i==0){
			printf("%d\n",i);
		}
	}
}
int main()//main function executes first
{
	int num;
	printf("Enter a value\n:");
	scanf("%d",&num);
	divisor(num);//calling the function
	return 0;
}
