#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Read text file print to POSIX in stdio
 * @filename: text file read
 * @letters: number of letters
 * Return: actual number of chars read and printed
 * if file name is null/function fails teturn 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
