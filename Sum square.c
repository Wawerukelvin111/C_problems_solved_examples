//print the summation of all squares from 5 to 25
//25+36+49...+576+625
#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=5;i<=25;i++){
        int square=i*i;//declare the square
        sum+=square;//same as sum=sum + square
        printf("%d",square);//call the squares
        if(i<25){//to print + 
            printf("+");
        }        
    }
    printf("=%d",sum);//final answer
    return 0;
}