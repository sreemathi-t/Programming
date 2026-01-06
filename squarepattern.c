#include <stdio.h>

int main() {
    char s[100];            // define a string to store input
    scanf("%s", s);         // read string from user

    int dig = 1;            // flag to check digits
    for (int i = 0; s[i] != '\0'; i++) {     // loop through string
        if (s[i] < '0' || s[i] > '9') {     // if character is not a digit
            dig = 0;                         // mark flag as false
            break;                            // exit loop
        }
    }

    if (dig) {
        printf("Contains only digits\n");
    } else {
        printf("Not only digits\n");
    }

    return 0;
}
