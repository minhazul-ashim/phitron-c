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
    int m,n;
    fscanf(inputFile,"%d %d", &m, &n);
    int arr[m];
    int frq[n] = 0;
    for (int i = 0; i < m; i++) {
        fscanf(inputFile,"%d",&arr[i]);
    }
    fprintf(outputFile, "%d %d %d\n", m,n, frq[2]);
    // Your code goes here;
    return 0;
}