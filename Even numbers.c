//Print the even numbers from 1 to 100
#include <stdio.h>
int main(){
    int i;//declare the variable
    for(i=1;i<=100;i++){//loop through the 100 numbers
        if(i%2==0){//check if the number is divisible by 2(with no remainder).note the modulus % 
            printf("%d\n",i);//continuously print the even numbers
        }
    }
    return 0;
}