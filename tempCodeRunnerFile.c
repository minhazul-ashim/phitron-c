// Has Return

#include <stdio.h>

void passReference (int * x) {
    *x = 10;
    printf("%d\n", *x);
    printf("%p\n", x);
}

int main() {
    int x = 5;
    passReference(&x);
    printf("%d\n", x);
    printf("%p\n", &x);
    return 0;
}