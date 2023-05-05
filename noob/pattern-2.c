#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int patternStart = n - (i+1);
        int patternEnd = n - 1;
        for (int j = 0; j < n; j++) {
            if(j >= patternStart && j <= patternEnd) {
                printf("%d", i + 1);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}