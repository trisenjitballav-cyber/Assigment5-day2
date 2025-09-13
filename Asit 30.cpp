#include <stdio.h>

int main() {
    int marks, choice;

    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);

    printf("\nGrade Menu:\n");
    printf("1. Display Grade\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            switch (marks / 10) {  
                case 10: // For 100
                case 9:  // For 90-99
                    if (marks >= 95)
                        printf("Grade: A+\n");
                    else
                        printf("Grade: A\n");
                    break;

                case 8: // For 80-89
                    printf("Grade: B\n");
                    break;

                case 7: // For 70-79
                    printf("Grade: C\n");
                    break;

                default: // Below 70
                    printf("Grade: F\n");
            }
            break;

        default:
            printf("Invalid choice! Please select 1.\n");
    }

    return 0;
}
