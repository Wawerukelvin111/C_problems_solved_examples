/* a C program with a user defined function that computes 
the sum of two numbers
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
	
	printf("Sum=%d\n",sum(10,20));
	printf("Product=%d",product(12,45));
	return 0;
}
