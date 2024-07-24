/*Write a program to obj 2 numbers using structure*/
#include <stdio.h>
struct addition{
	int x,y,z;
};

int main()
{
	struct addition obj;
	obj.y=20;
	obj.x=50;
	obj.z=obj.y+obj.x;
	printf("Add=%d",obj.z);
	return 0;
}
