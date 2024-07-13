/*write a function that takes an integer as input 
and prints even if the number is divisible by 2
otehrwise prints odd
Call this function from the main function */

#include <stdio.h>

void evenorodd(int num){
	if(num%2==0){//checks if the number is divisible by 2 without any remainder
		printf("Number is even");
	}
	else{
		printf("Number is odd");
	}
}

int main()
{
	int value;
	printf("Enter your value\n:");
	scanf("%d",&value);
	evenorodd(value);//calling the function
	return 0;
}
