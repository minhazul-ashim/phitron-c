#include <stdio.h> 

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int i = 0, count = 0;
    while(1) {
        if(i >= n) {
            i = 0;
            count++;
        }
        if(arr[i] % 2 == 0) {
            arr[i] = arr[i] / 2;
            i++;
            continue;
        } else {
            break;
        }
    }
    printf("%d", count);
    return 0;
}