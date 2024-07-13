//write a program that will print the summation of the follwoing
//101+99+97...+3+1=?
#include <stdio.h>

int main() {
    int sum = 0;//variable declaration
    int i;

    printf("Integers being added: ");
    for (i = 101; i >= 1; i -= 2) {//looping the odd numbers.Note i-=2 is same as i=i-2
        sum += i;//summing up the integers
        printf("%d ", i);
        if (i > 1) {//returns true as lng as i>1.
            printf("+ ");//note that + is not printed 
        }
    }

    printf("\nSummation of the series=%d\n", sum);

    return 0;
}