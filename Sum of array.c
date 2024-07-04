// Problem 01 :Sum of Array
// Take an array of integer data type of size 10
// Get input from user and store the values in the array and
// finally print the sum of those integers
#include<stdio.h>
 int main(){
    int i,myarray[10],sum=0;
    for(i=0;i<10;i++){
        printf("\nEnter array[%d]:",i);
        scanf("%d",&myarray[i]);
    }
    for (i=0;i<10;i++){
        sum+=myarray[i];
    }
    printf("The sum of entered arrays is:%d",sum);

    return 0;

 }