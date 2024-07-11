/*write a function that takes two integers as inputs
and prints their sum inside the function*/
#include<stdio.h>

int intsum(int a,int b){//function declaration
    int total;
    total=a+b;//integers a nd b are the parameters of function intsum()
    return total;
}

int main()
{
    int sum,val[2],i;
    for(i=0;i<=1;i++){//loop to enter the two entries
        printf("Enter integer value[%d]:\n",i);
        scanf("%d",&val[i]);
    }     
    sum=intsum(val[0],val[1]);
    printf("sum=%d",sum);
    return 0;
}