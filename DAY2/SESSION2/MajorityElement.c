#include <stdio.h>

int main() {
    int nums[3] = {3, 2, 3};
    int n = 3;
    int hash[4] = {0};

    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int index = num;
        hash[index]++;
    }

    for (int i = 0; i < 4; i++) {
        if (hash[i] > n / 2) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}