#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (ch < 'a' || ch > 'z') {
        printf("Invalid input! Please enter an alphabet.\n");
    } else {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
        }
    }

    return 0;
}
