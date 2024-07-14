/*write a function named findMax().
it takes 3 parameters and returns the maximum value 
among the three parameters
call this function from the main function */
#include <stdio.h>

int findMax(int a,int b,int c){//user defined function
		if(a>b && a>c){
			return a;
		}
		else if(b>c){
			return b;
		}
		else{
			return c;
		}
	}

int main()
{
	int a,b,c;
	printf("Enter 3 values\n:");
	scanf("%d\t%d\t%d",&a,&b,&c);
	printf("The maximum value is %d",findMax(a,b,c));
	//calling the function from the main function
	return 0;
}
