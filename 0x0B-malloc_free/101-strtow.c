#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: String to work with.
 *
 * Return: Pointer to an array of strings representing words.
 */
char **strtow(char *str)
{
    int i, count = 0, word = 0;
    char **result, *token, *copy;

    /** Quit if the string is empty **/
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    copy = strdup(str);  // Make a copy of the input string
    if (copy == NULL)
    {
        return NULL;  // Memory allocation failed
    }

    /** Word counting **/
    token = strtok(copy, " ");
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }

    /** Memory allocation **/
    result = (char **)malloc((count + 1) * sizeof(char *));
    if (result == NULL)
    {
        free(copy);
        return NULL;
    }

    /** Copying the words **/
    i = 0;
    token = strtok(str, " ");
    while (token != NULL)
    {
        result[i] = strdup(token);
        if (result[i] == NULL)
        {
            /** Memory allocation failed, cleanup and return NULL **/
            for (int j = 0; j < i; j++)
            {
                free(result[j]);
            }
            free(result);
            free(copy);
            return NULL;
        }

        i++;
        token = strtok(NULL, " ");
    }

    /** Set the last element of the array to NULL **/
    result[i] = NULL;

    free(copy);  // Free the copied string

    return result;
}
