
#include <stdio.h>

int spiralMatrix(int matrix[3][3], int m, int n, int result[]) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int k = 0;

    while (top <= bottom && left <= right) {

        // Move left to right
        for (int i = left; i <= right; i++) {
            result[k++] = matrix[top][i];
        }
        top++;

        // Move top to bottom
        for (int i = top; i <= bottom; i++) {
            result[k++] = matrix[i][right];
        }
        right--;

        // Move right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result[k++] = matrix[bottom][i];
            }
            bottom--;
        }

        // Move bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result[k++] = matrix[i][left];
            }
            left++;
        }
    }

    return k;
}

int main() {
    int m = 3, n = 3;

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result[9];

    int size = spiralMatrix(matrix, m, n, result);

    printf("Spiral order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
