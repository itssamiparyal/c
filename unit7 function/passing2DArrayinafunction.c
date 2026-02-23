#include <stdio.h>

void displayMatrix(int r[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
}

void matrixAddition(int a[3][3], int b[3][3]) {
    int result[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    displayMatrix(result);  // Call after completing the addition
}


int main() {
    int x[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int y[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("the addition of matrix:\n");
    displayMatrix(x);
    printf("\n And\n");
    displayMatrix(y);
    printf("\n=\n");
    matrixAddition(x, y);

    return 0;
}