#include <stdio.h> 

int main () {
    int n;
    int arr[n];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if(sum < 0) {
        sum = sum - (sum * 2);
    }
    printf("%d", sum);
    return 0;
}