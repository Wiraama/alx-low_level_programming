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

	if (argc == 2)
	{
		bytes = atoi(argv[1]);

		if (bytes >= 0)
		{
			char *main_ptr = (char *)main; /**getting address of main**/

			for (index = 0; index < bytes; index++)

			{
				printf("%02hhx", *(main_ptr + index));
				if (index < bytes - 1)
				{
					printf(" ");
				}
				else
				{
					printf("\n");
				}
			}

		}
		printf("Error\n");
		exit(2);
	}
	printf("Error\n");
	exit(1);
}

