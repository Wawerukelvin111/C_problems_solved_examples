/*write a recursive function to calculate the facorial of a number
from the user input*/ 
#include <stdio.h>

int factorial(int n);

int main()
{
	int num;
	printf("Enter your number:");
	scanf("%d",&num);
	printf("%d! =%d",num,factorial(num));

	return 0;
}
int factorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n* factorial(n-1);
	}
}
