/*Palindrome - a string that has the same form when scanned from left or right
Write a program that accepts a user input and determines 
whether the input is a palindrome or not*/
#include <stdio.h>
#include <string.h>
#include <ctype.h> // for toupper or tolower

int main() {
    char str[1000];
    int length, i, flag = 1; // Initialize flag to 1 for easier logic
    printf("Enter a word to check:\t");
    scanf("%s", str);
    length = strlen(str);
	/*To make the palindrome check case-insensitive, 
	you can convert the input string to 
	either uppercase or lowercase before performing the comparison.*/
    for (i = 0; i < length / 2; i++) {
        if (toupper(str[i]) != toupper(str[length - i - 1])) {
            flag = 0;
            break;
        }
    }

    if (flag == 0) {
        printf("It is NOT a Palindrome");
    } else {
        printf("It is a palindrome");
    }

    return 0;
}
