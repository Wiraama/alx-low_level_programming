#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main program
 * program that prints the name of the file it was compiled from
 * followed by a new line
 *
 * Return: nothing
 */

int main(void)
{
	printf("%s\n", _FILE__);

	return (0);
}
