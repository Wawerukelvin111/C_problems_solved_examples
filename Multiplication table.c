//Create a program that obtains an integer input from a user and displays 
//the multiplication table of that number 
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter your integer:");
    scanf("%d",&num);//user inputs the integer
    for(i=1;i<=10;i++){//continiously loops while multiplying 
        printf("\n%d*%d=%d",num,i,num*i);//outputs the table 
    }
    return 0;
}
