#include "main.h"
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
	
	for (count = 0; count < argc; count++)
	{
		printf("argv[%d] of string %s", count, argv[count]);
	}
	return (0);
}
