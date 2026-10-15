
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][n];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int temp = arr[i][left];
            arr[i][left] = arr[i][right];
            arr[i][right] = temp;

            left++;
            right--;
        }
    }

    // Print rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
