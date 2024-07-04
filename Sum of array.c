// Problem 01 :Sum of Array
// Take an array of integer data type of size 10
// Get input from user and store the values in the array and
// finally print the sum of those integers
#include<stdio.h>
 int main(){//the start of progran execution
    int i,myarray[10],sum=0;//we declare the variables
    for(i=0;i<10;i++){//loop statement for repeated user input
        printf("\nEnter array[%d]:",i);//
        scanf("%d",&myarray[i]);//accepts the user to input 10 integers with index from 0 - 9
    }
    for (i=0;i<10;i++){
        sum+=myarray[i];//this program loops through the entered arrays and adds them 
    }
    printf("The sum of entered arrays is:%d",sum);//total sum displayed at the console

    return 0;

 }