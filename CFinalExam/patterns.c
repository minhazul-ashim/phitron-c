#include <stdio.h>

int main () {
    int rows;
    scanf("%d", &rows);
    int cols = (rows * 2) - 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int patternStart = (rows-1) - i;
            int patternEnd = (rows-1) + i;
            if(j >= patternStart && j <= patternEnd) {
                if(i % 2 == 0) {
                    printf("^");
                } else {
                    printf("*");
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}