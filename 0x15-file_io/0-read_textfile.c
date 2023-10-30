#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read the file out.
 * @filename: the file to be read
 * @letters: number
 * Return: w- actual number and 0 it it fail
 *
 * by jamiu
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *redd;
	ssize_t dir;
	ssize_t wri;
	ssize_t ho;

	dir = open(filename, O_RDONLY);
	if (dir == -1)
		return (0);
	redd = malloc(sizeof(char) * letters);
	ho = read(dir, redd, letters);
	wri = write(STDOUT_FILENO, redd, ho);

	free(redd);
	close(dir);
	return (wri);
}
