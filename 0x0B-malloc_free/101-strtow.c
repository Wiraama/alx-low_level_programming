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
    int i, j, count = 0, word = 0;
    char **result;

    /** Quit if the string is empty **/
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    /** Word counting **/
    while (*str)
    {
        if (*str == ' ' || *str == '\0')
        {
            if (word)
            {
                count++;
                word = 0;
            }
        }
        else
        {
            word = 1;
        }
        str++;
    }

    /** Memory allocation **/
    result = (char **)malloc((count + 1) * sizeof(char *));
    if (result == NULL)
    {
        return NULL;
    }

    str -= count;

    /** Copying the words **/
    i = 0;
    while (i < count)
    {
        result[i] = strdup(str); /** Duplicate each word using strdup **/
        if (result[i] == NULL)
        {
            /** Memory allocation failed, cleanup and return NULL **/
            for (j = 0; j < i; j++)
            {
                free(result[j]);
            }
            free(result);
            return NULL;
        }

        i++;
        str = strtok(NULL, " ");
    }

    /** Set the last element of the array to NULL **/
    result[i] = NULL;

    return result;
}
