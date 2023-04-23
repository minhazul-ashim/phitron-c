#include <stdio.h> 
#include <string.h>
int main () {
    char str[100];
    scanf("%s", str);
    int val[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        int value = str[i] - 'a';
        val[value]++;
    }
    for (int i = 0; i < 26; i++)  {
        if(val[i] == 0) {
            continue;
        } else {
            printf("%c : %d\n", i+97, val[i]);
        }
    }
    return 0;
}