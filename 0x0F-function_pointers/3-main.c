#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main fuction
 * @argc: parameter one
 * @argv: parameter two
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*pointer)(int, int); /**fuction pointer**/
	int (*get_op_func(char *))(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	/**converting strings to int form**/
	num1 = atoi(argv[1]); /**note: the numbers in [] represent element of array**/
	num2 = atoi(argv[3]);

	pointer = get_op_func(argv[2]);

	if (pointer == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	result = pointer(num1, num2);

	printf("%d\n", result);

	return (0);
}
