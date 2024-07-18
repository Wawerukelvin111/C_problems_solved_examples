/*write a program whch takes a sentence as input and 
prints the number of words in the sentence*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i, wordCount = 0;
    int inWord = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}