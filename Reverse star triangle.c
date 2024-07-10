/*Write a program to output a star triangle in the below format
*****
****
***
**
* 
use ten entries*/
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){//outerloop
        for(j=i;j<=10;j++){//innerloop
             printf("*");// prints stars at the console
        }
        printf("\n");//ensures that the stars of a line are 
    }
    return 0;
}