#include<stdio.h>

int main()
{
    int i = 12, *ip = &i;
    double d = 2.31, *dp = &d;

    printf("Value of ip = address of i = %d\n", ip);
    printf("Value of fp = address of d = %d\n\n", d);

    printf("Address of ip = %d\n", &ip);
    printf("Address of dp = %d\n\n", &dp);

    printf("Value at address stored in ip = value of i = %d\n", *ip);
    printf("Value at address stored in dp = value of d = %f\n\n", *dp);

    // memory occupied by pointer variables 
    // is same regardless of its base type

    printf("Size of pointer ip = %d\n", sizeof(ip));
    printf("Size of pointer dp = %d\n\n", sizeof(dp));

    // signal to operating system program ran fine
    return 0;
}
