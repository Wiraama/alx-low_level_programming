#include <stdio.h>
/**
 * main - entry point
 * program that prints all arguments it receives.
 *
 * @argc: receives numbers
 * @argv: receives string type
 * 
 * Return: always 0
 */

int main(int argc, char* argv[])
{
	int count;
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
