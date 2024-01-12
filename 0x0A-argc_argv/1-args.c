#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to the program
 * Prints the number of arguments passed to the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1);

    return 0;
}
