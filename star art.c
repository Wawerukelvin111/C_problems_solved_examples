/*write a program to output the following star arrangement
*****
 ***
  *
 ***
*****
*/
#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j;

    for (i = 0; i < rows; i++) {
        // Print spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < 2 * (rows - i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = rows - 2; i >= 0; i--) {
        // Print spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < 2 * (rows - i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
	return 0;
}
