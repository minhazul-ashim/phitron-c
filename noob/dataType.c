#include <stdio.h>

int main () {
    char x;
    scanf("%c", &x);
    int v = (char) x;
    if(v >= 48 && v <= 57) {
        printf("IS DIGIT");
    } else if(v >= 65 && v <= 90) {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    } else if(v >= 97 && v <= 122) {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    return 0;
}