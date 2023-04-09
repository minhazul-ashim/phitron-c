#include <stdio.h>

int main () {

    int x, y, z, temp;
    scanf("%d %d %d", &x, &y, &z);
    if(x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if(y > z) {
        temp = y;
        y = z;
        z = temp;
    }
    if(x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    printf("%d %d", x, z);
    return 0;
}