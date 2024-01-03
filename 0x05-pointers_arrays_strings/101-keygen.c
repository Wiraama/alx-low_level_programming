#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generatePassword - Generates a random valid password.
 * Return: Pointer to the generated password.
 */
char *generatePassword(void)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int passwordLength = 12;
    char *password = malloc((passwordLength + 1) * sizeof(char));

    if (password == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    for (int i = 0; i < passwordLength; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[passwordLength] = '\0';

    return password;
}

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
    char *password = generatePassword();

    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}

