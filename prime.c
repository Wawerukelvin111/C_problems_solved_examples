/*write a program that accewpts a user input determine 
whether it is prime or not and then outputs its findings */
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,flag=0;
	printf("Enter your value:");
	scanf("%d",&i);
	for(i=2;i*i<=n;i++){//Use a loop to check for divisors from 2 up to the square root of n.
		if(n%i==0){
			flag=1;//flag is a boolean meaning it is either 1 or 0
			break;//If a divisor is found, set flag to 1 and break the loop.
		}
	}
	//Print whether the number is prime based on the value of flag.
	if(flag==0){
		printf("It is a prime number");
	}
	else{
		printf("It is NOT a prime number");
	}

	return 0;
}
