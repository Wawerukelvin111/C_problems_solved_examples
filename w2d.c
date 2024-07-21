/*write a program tothat prompts a user to enter elements of 
a 3*3 matrix and display them*/
#include <stdio.h>

void main()
{
	int a[3][3], i, j;
	
	printf("\n\t Enter matrix of 3*3 : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		scanf("%d",&a[i][j]);  //read 3*3 array
		}
	}
	printf("\n\t Matrix is : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		printf("\t %d",a[i][j]);  //print 3*3 array
		}
	   printf("\n");
	}
}