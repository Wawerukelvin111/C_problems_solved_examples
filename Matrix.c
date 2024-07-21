/*write a program that allows a user to enter the number of rows and columns 
of a matrix and perform addition to the matrices*/
#include <stdio.h>

int main()
{
	int m,n,c,d,first[10][10],second[10][10],sum[10][10];
	printf("Enter the numbers of rows and columns\n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of the first matrix\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&first[c][d]);
printf("Enter the elements of the second matrix\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&second[c][d]);
for(c=0;c<m;c++)
	for(d=0;d<n;d++)
sum[c][d]=first[c][d]+second[c][d];
printf("Sum of the two matrix\n");
for(c=0;c<m;c++)
	for(d=0;d<n;d++)
printf("%d\t",sum[c][d]);


	return 0;
}