#include <stdio.h>

int main() {
    int choice;
    float principal, rate, time, si;

    printf("=== Simple Interest Calculator ===\n");
    printf("1. Calculate Simple Interest\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Principal Amount: ");
            scanf("%f", &principal);
            printf("Enter Rate of Interest: ");
            scanf("%f", &rate);
            printf("Enter Time (in years): ");
            scanf("%f", &time);

            si = (principal * rate * time) / 100;
            printf("Simple Interest = %.2f\n", si);
            break;

        case 2:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
    }
    return 0;
}