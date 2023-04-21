#include <stdio.h> 
#include <string.h>

int main () {
    char str[1000];
    int count = 0;
    scanf("%s", &str);
    for (int i = 0; i <= 1000; i++) {
        char val = str[i];
        if(str[i] == '\0') {
            break;
        }
        else if (val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u')
        {
            count++;
            continue;
        }
    }
    printf("%d", count);
    return 0;
}