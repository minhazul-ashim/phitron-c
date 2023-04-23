#include <stdio.h> 

int main () {
    FILE* inputFile;
    FILE* outputFile;

    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL) {
        printf("No Input File Found");
        return 0;
    }
    outputFile = fopen("output.txt", "w");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        if(i % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}