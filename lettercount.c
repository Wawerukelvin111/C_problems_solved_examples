/*Lets take a string and you have to find
how many alphabets are there and their repetitions*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, arr[256] = {0}; // Initialize arr elements to zero
	//nitialize the arr array elements to zero outside the loop to avoid unnecessary reinitialization.
    printf("Enter a word: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read input string
	//Use fgets instead of scanf to read the input string to handle spaces and prevent buffer overflow.
    for (i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {//terate over the actual alphabet characters 
            arr[str[i]]++;
        }
    }

    for (i = 0; i < 256; i++) {
        if (arr[i] != 0) {
            printf("%c(%d) ", i, arr[i]); // Print alphabet character and its count
        }
    }

    return 0;
}
