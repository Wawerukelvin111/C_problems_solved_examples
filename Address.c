/*take two pointer variables of integer type named pX and pY\
Now take another two variables of integer datatype named X and Y
Assign X=100 and Y=200 
Assign the address of X topX and Y to pY 
Now print the values of X and Y using pX and pY*/
#include <stdio.h>

int main()
{
	int *pX,*pY;//pointer variable declaration
	int X=100,Y=200;//declaration of variable type integer
	pX=&X;//the & operator is used in derefrencing the address
	pY=&Y;
	printf("Value of X=%d\nValue of Y=%d",*pX,*pY);
	return 0;
}
