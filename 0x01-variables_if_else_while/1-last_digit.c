#include <stdlib.h>
#include <time.h>

/**
 * The variable n will store a different value every time you run this program
 * his program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
 * betty style doc for function main goes there
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * return option
	 */

	return (0);
}
