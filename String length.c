//find the length of the string a user inputs
#include<stdio.h>
#include<string.h>//enables the sting functions
int main(){
    char str[100];
    printf("Enter the word:\n");
    scanf("%s",str);
    int i=0,length=0;
    while(1){
        if(str[i]=='\0'){
            break;
        }
        else{
            length++;
            i++;
        }
    }
    printf("%d",length);
}