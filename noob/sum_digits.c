#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    char arr[n];
    int sum = 0;
    scanf("%s", arr);
    for (int i = 0; i < n; i++) {
        sum += (arr[i] - 48);
    }
    printf("%d", sum);
    return 0;
}