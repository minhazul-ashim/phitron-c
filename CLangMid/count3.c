#include <stdio.h>

int main () {
    char str[1000];
    int val[26] = {0};
    scanf("%s", str);
    for (int i = 0; i <= 1000; i++) {
        if(str[i] == '\0') {
            break;
        }
        int index = str[i] - 'a';
        val[index]++;
    }
    for (int j = 0; j < 26; j++) {
        printf("%c - %d\n", j + 'a', val[j]);
    }
    return 0;
}
