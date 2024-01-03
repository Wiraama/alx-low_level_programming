#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12
/**prototype**/
void generatePassword(char *password, int length) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    
    srand(time(NULL)); /**Seed the random number generator with the current time**/

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[length] = '\0'; /**Null-terminate the string**/
}
/**
 * main - entry point
 * 
 * this receive call and prit the password
 * 
 * Return: Always 0
 */
int main() {
    char password[PASSWORD_LENGTH + 1]; /**+1 for the null terminator**/

    generatePassword(password, PASSWORD_LENGTH);

    printf("Generated Password: %s\n", password);

    return 0;
}
