#include <stdio.h>

int main() {
    int units, choice;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("\nBill Calculation Menu:\n");
    printf("1. Calculate Electricity Bill\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (units <= 100) {
                bill = units * 5;
            } 
            else if (units <= 200) {
                bill = (100 * 5) + (units - 100) * 7;
            } 
            else {
                bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            }

            printf("\n--- Electricity Bill ---\n");
            printf("Units Consumed = %d\n", units);
            printf("Total Bill     = ?%.2f\n", bill);
            break;

        default:
            printf("Invalid choice! Please select 1.\n");
    }

    return 0;
}


    
