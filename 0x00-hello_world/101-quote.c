#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints given massage to starndard error
 * Return: always 1.
 */
int main(void)
{
	const char massage[]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, sizeof(massage) - 1);
	return (1);
}
