/*write a program to display the use of the recursive function
to show to calculate the power
when the user enters the base and the exponebtial*/
#include <stdio.h>

int power(int base,int exp);

int main()
{
	int base,exp;
	printf("\nEnter the base:");
	scanf("%d",&base);
	printf("\nEnter the exponential:");
	scanf("%d",&exp);
	printf("%d^%d =%d",base,exp,power(base,exp));
	
	return 0;
}

int power(int base,int exp){
	if(exp==0){
		return 1;
	}
	else{
		return base*power(base,exp-1);
	}
}
