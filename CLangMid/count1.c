#include <stdio.h> 

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    };
    for (int i = 0; i< n; i++) {
        if(arr[i] % 2 == 0) {
            x++;
        } else {
            y++;
        }
    }
    printf("%d %d", x, y);
    return 0;
}