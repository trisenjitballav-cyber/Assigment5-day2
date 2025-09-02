#include <stdio.h>

int main() {
    char coin;

    printf("Enter the result of coin toss (H for Head, T for Tail): ");
    scanf(" %c", &coin);

    if (coin == 'H' || coin == 'h') {
        printf("It is Head.\n");
    } 
    else if (coin == 'T' || coin == 't') {
        printf("It is Tail.\n");
    } 
    else {
        printf("Invalid input! Please enter H or T.\n");
    }

    return 0;
}
