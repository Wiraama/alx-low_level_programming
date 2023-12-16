#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program will assign a random number to the variable n each time it is executed
 *
 * return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	{
		printf("n\n");
	}

	return (0);
}
