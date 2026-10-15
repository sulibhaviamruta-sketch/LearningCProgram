
#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int num;
    char reg[20];
    double gross;
    double tare;
};

// Helper 1: Calculate net weight
double helper1(struct Ticket *t) {
    return t->gross - t->tare;
}

// Helper 2: Print ticket details
void helper2(struct Ticket *t) {
    printf("%d %s gross %.2f tare %.2f\n",
           t->num, t->reg, t->gross, t->tare);

    printf("net %.2f\n", helper1(t));
}

int main() {
    int n;
    scanf("%d", &n);

    // Validate ticket count
    if (n <= 0 || n > 100000) {
        printf("INVALID COUNT\n");
        return 0;
    }

    // Dynamic memory allocation
    struct Ticket *arr = malloc(n * sizeof(struct Ticket));

    if (arr == NULL) {
        return 1;
    }

    // Input ticket details
    for (int i = 0; i < n; i++) {
        scanf("%d %19s %lf %lf",
              &arr[i].num,
              arr[i].reg,
              &arr[i].gross,
              &arr[i].tare);
    }

    double total = 0.0;
    double maxNet = helper1(&arr[0]);
    int maxIndex = 0;

    // Calculate total and find heaviest load
    for (int i = 0; i < n; i++) {
        double netW = helper1(&arr[i]);

        total += netW;

        if (netW > maxNet) {
            maxNet = netW;
            maxIndex = i;
        }
    }

    // Print day book
    printf("WEIGHBRIDGE DAY BOOK\n");

    for (int i = 0; i < n; i++) {
        helper2(&arr[i]);
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);

    printf("Heaviest net load: ticket %d %s\n",
           arr[maxIndex].num, arr[maxIndex].reg);

    printf("%.2f\n", maxNet);

    // Release allocated memory
    free(arr);

    return 0;
}
