#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generateRandomChar() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

void generatePassword(char *password, int length) {
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        password[i] = generateRandomChar();
    }

    password[length] = '\0';
}

int main() {
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    generatePassword(password, PASSWORD_LENGTH);

    printf("Generated Password: %s\n", password);

    return 0;
}
