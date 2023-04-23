#include <stdio.h> 


int main () {
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = x-1; i >= 0; i--) {
        int compareIndex = (x-1) - i;
        if(arr[i] == arr[compareIndex]) {
            continue;
        } else {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}