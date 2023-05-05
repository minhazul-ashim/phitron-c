#include <stdio.h>
#include <string.h>
int is_palindrome(char word[10]) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        int compareIndex = (length-1) - i;
        if(word[i] == word[compareIndex]) {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

int main () {
    char word[10];
    scanf("%s", word);
    int result = is_palindrome(word);
    if(result) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}