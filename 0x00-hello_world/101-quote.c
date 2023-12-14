#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints given massage to starndard error
 * Return: always 1.
 */
int main(void)
{
       	const char message[] = "and that piece of art is useful\";
	const char message[] = "Dora Korpar, 2015-10-19\n";

    /* Using write function to print to standard error */
	 write(STDERR_FILENO, message, sizeof(message) - 1);
	return (1);
}
