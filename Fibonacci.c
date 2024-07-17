/*write a program which will take an integer N as input 
from user and print Fibonacci series up to N
If a user gives it N=15 you should print:0 1 1 2 3 5 8 13*/
#include <stdio.h>

int main()
{
	int n,first=0,second=1;
	printf("Enter the number for Fibonacci:");
	scanf("%d",&n);
	while(first<n){
		printf("%d ",first);
		int temp=first;
		first=second;
		second=second+temp;
	}
	return 0;
}
