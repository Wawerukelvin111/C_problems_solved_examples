/*write a function that simply a message that says
Hello I am from inside function
Call the funtion from the main */
#include <stdio.h>
void display(){//void type function called display 
	printf("Hello I am fom inside function\n");
}
int main()//the main function will execute first
{
	display();//calls the function display
	return 0;
}
