#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *	function should read and print.
 *
 * Return: 0
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *x;

	if (!filename)
		return (0);

	x = malloc(sizeof(char) * letters);
	if (x)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, x, letters);
	w = write(STDOUT_FILENO, x, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(x);
		return (0);
	}

	free(x);
	close(o);

	return (w);
}
