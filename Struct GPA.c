/*Create a simple structure named studebt that holds the following variables:
id(int),cgpa(float),name(string)
Now create an instance of that structure named s1and scan the values from the user
Finally print the id,cgpa and name which user entered*/

#include <stdio.h>

struct student{
	int id;
	float cgpa;
	char name[20];
};

int main()
{
	struct student s1;
	printf("Enter ID:");
	scanf("%d",&s1.id);
	printf("\nEnter CGPA:");
	scanf("%f",&s1.cgpa);
	printf("\nEnter the name:");
	scanf("%s",&s1.name);

	printf("\n\t Student information\n");
	printf("ID:%d\n",s1.id);
	printf("CGPA:%.1f\n",s1.cgpa);
	printf("Name:%s",s1.name);
	return 0;
}
