/*write a program to output the following output using loop
1 1
12 21
123 321
1234 4321
12345 54321*/
#include <stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);//prints the numbers on the left
		}
		printf(" ");//adds the vertical space for separation
		for(k=i;k>=1;k--){
			printf("%d",k);//prints the numbers on the right
		}
		printf("\n");//new line
	}
	
	return 0;
}
