#include <stdio.h> 

int main () {
    int x;
    int lowest, lowestIndex, largest, largestIndex;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    lowest = arr[0];
    lowestIndex = 0;
    largest = arr[0];
    largestIndex = 0;
    for (int i = 0; i < x; i++) {
        if(arr[i] < lowest) {
            lowest = arr[i];
            lowestIndex = i;
        }
        if(arr[i] > largest) {
            largest = arr[i];
            largestIndex = i;
        }
    }
    arr[lowestIndex] = largest;
    arr[largestIndex] = lowest;
    for (int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}