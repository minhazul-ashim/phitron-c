#include <stdio.h>
 
int main () {
 
    char c;
    scanf("%c", &c);
    int v = c;
    if(v >= 97 && v <= 122) {
        c = (char)(v - 32);
    } else {
        c = (char)(v + 32);
    }
    printf("%c", c);
    return 0;
}