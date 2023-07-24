#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

// Function to generate a random uppercase letter
char generate_random_letter() {
    return 'A' + rand() % 26;
}

// Function to generate a random digit
char generate_random_digit() {
    return '0' + rand() % 10;
}

// Function to generate a random valid password
void generate_random_password(char *password, int length) {
    for (int i = 0; i < length; i++) {
        int type = rand() % 3; // Randomly choose the character type (letter, digit, or symbol)

        switch (type) {
            case 0:
                password[i] = generate_random_letter();
                break;
            case 1:
                password[i] = generate_random_digit();
                break;
            default:
                // You can add code here to generate random symbols if needed.
                // For simplicity, we'll generate letters and digits only.
                password[i] = generate_random_letter();
        }
    }
    password[length] = '\0'; // Null-terminate the password string
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char valid_password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    generate_random_password(valid_password, PASSWORD_LENGTH);
    printf("%s", valid_password);

    return 0;
}

