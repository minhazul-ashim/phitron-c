#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int loopIteration = n * 2 - 1;
    for (int i = 0; i < n; i++) {
        int patternStart = (n-1) - i;
        int patternEnd = (n-1) + i;
        int count = 1;
        for (int j = 0; j < loopIteration; j++) {
            if(j >= patternStart && j <= patternEnd) {
                printf("%d", count);
                count++;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        int patternStart = i;
        int patternEnd = loopIteration - (i+1);
        int count = 1;
        for (int j = 0; j < loopIteration; j++) {
            if(j >= patternStart && j <= patternEnd) {
                printf("%d", count);
                count++;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}