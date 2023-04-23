#include <stdio.h>

int main () {
    int x;
    scanf("%d", &x);
    if(x == 1) {
        printf("%d", 0);
        return 0;
    } else if(x == 2) {
        printf("%d", 1);
        return 0;
    }
    long long fib[51] = {0, 1};
    for (int i = 2; i <= x; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%lld", fib[x-1]);
    return 0;
}