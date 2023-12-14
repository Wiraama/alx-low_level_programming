#include<stdio.h>

/** 
* program to print 'and that piece of art is useful - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
* not to use printf nor puts
* print a new line
* direct to standard error
*/
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	
	return(1)


}
