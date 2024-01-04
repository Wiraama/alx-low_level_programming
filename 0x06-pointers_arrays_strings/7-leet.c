#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */
char *leet(char *str) {
    if (str == NULL) {
        return NULL;  /**Handle the case of a NULL pointer**/
    }

    char *ptr = str;

    while (*ptr) {
        if (*ptr == 'a' || *ptr == 'A') {
            *ptr = '4';
        } else if (*ptr == 'e' || *ptr == 'E') {
            *ptr = '3';
        } else if (*ptr == 'o' || *ptr == 'O') {
            *ptr = '0';
        } else if (*ptr == 't' || *ptr == 'T') {
            *ptr = '7';
        } else if (*ptr == 'l' || *ptr == 'L') {
            *ptr = '1';
        }
        ptr++;
    }

    return str;
}
