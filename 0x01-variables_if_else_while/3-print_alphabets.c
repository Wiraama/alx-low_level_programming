#include <stdio.h>

/**
 * main - entry point
 *  Declarations: program to print alphabet both lower case and upper case
 *
 *  return: always 0
 */
int main(void)
{
	char c;

	/* this should print lower case letters*/
	for (c = 'a' c <= 'z' ++c);
	{
		putchar(c);
	}

	/*this should print uppercase letter*/

	for (c = 'A'; c <= 'Z'; ++c);
	{
		putchar(c);
	}

	/*to print new line*/
	 putchar('\n')
}
