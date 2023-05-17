#include <stdio.h> 

int main () {
    int n;
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int el = mat[i][j];
            if((i == j && el != 1) || (i != j && el != 0)) {
                flag = 0;
                break;
            } else {
                continue;
            }
        }
    }
    if(flag) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}


/* 
Problem Statement

You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

Input Format

First line will contain N, the row and column of the square matrix.
Then the N * N sized matrix will be given where the values are integer only.
Constraints

1 <= N <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks.




Sample Input 0

3
1 0 0
0 1 0
0 0 1
Sample Output 0

YES


Sample Input 1

5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 1
0 0 0 1 0
0 0 0 0 1
Sample Output 1

NO
*/