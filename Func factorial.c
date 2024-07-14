/*using user defined functio create a program that 
takes the input from a user and calculate its factorial*/
#include <stdio.h>

int factorial(int num){
	//function to calculate factorial
	if(num==0){
		return 1;//returns 1 if number entered is 0
	}	
	else{
		int f=1,i;
		for(i=num;i>0;i--){	
			f=f*i;						
		}	
	return f;//returns the factorial
	}
	
}

int main()
{ 
	int num;
	printf("Enter a number to find its factorial:");
	scanf("%d",&num);
	
	if(num<0){
		printf("Only positive numbers allowed!");		
	}
	else{
		printf("\nFactorial=%d\n",factorial(num));
	}
	
	return 0;
}
