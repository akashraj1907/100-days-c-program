//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longestWord[100] = "";
    char currentWord[100] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");

    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    int len = strlen(sentence);

    for (i = 0; i <= len; i++) {

        if (sentence[i] != ' ' && sentence[i] != '\0') {
            currentWord[j++] = sentence[i];
        } else {

            currentWord[j] = '\0';

            if (strlen(currentWord) > strlen(longestWord)) {
                strcpy(longestWord, currentWord);
            }

            j = 0;
        }
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}