#include <stdio.h>

/**
 * main - entry point
 *
 * Declaration: program to print the alphabet in lowercase followed by a new line
 *
 * return: always 0
 */
int main(void)
{	
	char c;
	/* to print alphabet in lower case*/
	for (c = 'a'; c <= 'z'; ++c)

{
	putchar(c);
}
/*print a new line*/
putchar('\n');

return 0;
}
