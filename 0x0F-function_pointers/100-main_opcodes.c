#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry bpoint
 * @argc: argument count
 * @argv: argument value
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int index, bytes;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		printf("%02hhx", *((char *)main + index));
		if (index < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
