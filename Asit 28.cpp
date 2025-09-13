#include <stdio.h>

int main() {
    int choice;
    float basic, hra, ta, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("\nSalary Calculation Menu:\n");
    printf("1. Calculate Gross Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            hra = 0.20 * basic;   
            ta  = 0.10 * basic;   
            da  = 0.05 * basic;  
            gross = basic + hra + ta + da;

            printf("\n--- Salary Details ---\n");
            printf("Basic Salary = %.2f\n", basic);
            printf("HRA (20%%)    = %.2f\n", hra);
            printf("TA  (10%%)    = %.2f\n", ta);
            printf("DA  (5%%)     = %.2f\n", da);
            printf("Gross Salary = %.2f\n", gross);
            break;

        default:
            printf("Invalid choice! Please select 1.\n");
    }

    return 0;
}
