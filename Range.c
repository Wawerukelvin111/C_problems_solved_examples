/*print the numbers betweeen 100 to 200 
which are completely divisible by 3 and 5*/
#include <stdio.h>
int main(){
    int i;
    for(i=100;i<=200;i++){
        if(i%3==0 && i%5==0){
            printf("%d\n",i);
        }
    }
    return 0;
}