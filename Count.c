/*write a program that takes input from user (integer)
takes  the numbers and adds them*/
#include <stdio.h>

int main()
{
	int n,num,remainder,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	while(n>0){//the program takes the nummber eg 123 
		remainder=n%10;//123divide by 10 results to 3
		//3 is added to sum which was 0 and result is 3
		sum+=remainder;
		//12/10 results to rem 2 which is added to the sum which is now 3
		//this results sum to 5		
		n/=10;//1 goes the same process and the result of sum is added to get 6
	}
	printf("The sum of %d is %d",num,sum);
	return 0;
}

/*Example Usage
// Example usage:
// User inputs: 123
// Output: The sum of 123 is 6*/