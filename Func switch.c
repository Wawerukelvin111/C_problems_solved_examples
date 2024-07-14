/*a C program allows a user to select a task from two tasks 
with a user defined function 
that computes the sum of two numbers
and another user defined function to compute product*/
#include <stdio.h>
int sum(int a,int b){
	int s;
	s=a+b;
	return s;
}

int product(int a,int b){
	int p;
	p=a*b;
	return p;
}

int main()
{	
	int opt,a,b;
	printf("Enter 1 for summation or 2 for multiplication\n:");
	scanf("%d",&opt);
	switch(opt){
		case 1:
		printf("Enter your two numbers: ");
		scanf("%d%d",&a,&b);
		printf("Sum=%d\n",sum(a,b));
		break;

		case 2:		
		printf("Enter your two numbers: ");
		scanf("%d%d",&a,&b);
		printf("Product=%d",product(a,b));
		break;

		default:
		printf("Invalid choice");
		break;	
	}
	return 0;
}
