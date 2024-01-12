#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to the Program
 * program that prints its name, followed by a new line
 * 
 * @argc: number argument
 * @argv[]: string with comman-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
	int count;
	
	for (count = 0; count < argc; count++)
	{
		printf("%s\n",argv[count]);
	}
	return (0);
}
