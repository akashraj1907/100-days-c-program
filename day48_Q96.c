//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    int start = 0;
    int len = strlen(str);

    for (int end = 0; end <= len; end++) {
  
        if (str[end] == ' ' || str[end] == '\0') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");

    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {

        sentence[strcspn(sentence, "\n")] = '\0';

        reverseWords(sentence);

        printf("Output:\n%s\n", sentence);
    }

    return 0;
}