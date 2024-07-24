/*Write a program to obj 2 numbers using structure
This numbers should be from the user input*/
#include <stdio.h>
struct addition{
	int x,y,z;
};

int main()
{
	struct addition obj;
	printf("Enter the first number:");
	scanf("%d",&obj.x);
	printf("Enter the second number:");
	scanf("%d",&obj.y);
	obj.z=obj.y+obj.x;
	printf("Addition=%d",obj.z);
	return 0;
}
