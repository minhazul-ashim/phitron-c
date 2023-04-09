#include <stdio.h>

#define PI 3.141592653

int main () {
    double r;
    scanf("%lf", &r);
    double area = (PI)*r*r;
    printf("%0.9lf", area);
    return 0;
}