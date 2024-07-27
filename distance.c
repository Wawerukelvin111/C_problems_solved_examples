/*Write a program which takes the corrdinates of two points
(x1,y1) and (x2,y2)from the user and
print the distance between this two points */
#include <stdio.h>
#include <math.h>

int main()
{
	int x1,y1,x2,y2;
	printf("Enter the value of x1 and y1:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the value of x2 and y2:");
	scanf("%d%d",&x2,&y2);
	double distance=pow((x1-x2),2)+pow((y1-y2),2);
	distance=sqrt(distance);
	
	printf("The distance netween the two points is %lf",distance);
	return 0;
}
