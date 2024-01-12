#include <stdio.h>

/**
 * main - Entry point to the Program
 * program that prints its name, followed by a new line
 * 
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
	int count;
	
	printf("Program was called with \"%s\".\n",argv[0]);
	if(argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
	{
		printf("no more arguments");
	}
	return (0);
}
