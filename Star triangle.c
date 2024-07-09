/*Write a program to output a star trianglein the below format
*
**
***
****
*****
use ten entries*/
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){//outerloop
        for (j=1;j<=i;j++){//outerloop
            printf("*");// prints stars at the console
        }printf("\n");//makes the stars to each start in a new line
    }return 0;
}