/*write a function that takes a real nmber 
and return an absolute value
If a user gives it a -5 it should output a 5*/
#include <stdio.h>

int absolute(int value){
	if(value<0){
		int abs=value*(-1);
		return abs;
	}
	else if(value==0){
		return 0;
	}
	else {
		int abs=value*1;
		return abs;
	}
}

int main()
{
	int value;
	printf("Enter your value:");
	scanf("%d",&value);
	printf("Absolute value of %d is %d",value,absolute(value));
	return 0;
}
