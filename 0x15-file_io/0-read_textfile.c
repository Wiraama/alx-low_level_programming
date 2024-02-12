#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - mai entry point
 * @filename: name to the file
 * @letters: given letter
 *
 * Return: to main fuction
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	/** memory allocation **/
	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
