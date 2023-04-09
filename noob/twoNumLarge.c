#include <stdio.h> 

int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(x >= y) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}