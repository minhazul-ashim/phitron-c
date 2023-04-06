#include <stdio.h> 

int main () {
    long long a;
    scanf("%lld", &a);
    if(a > 1000) {
        printf("I will buy Punjabi\n");
        a -= 1000;
        if(a >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
        printf("Bad Luck!");
    }
    // Your code goes here;

    return 0;
}