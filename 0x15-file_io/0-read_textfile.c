#include "holberton.h"

/**
 * read_textfile - read_textfile
 * @filename: the name of the file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rw, rr;

	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	rr = read(fd, buf, letters);

	rw = write(STDOUT_FILENO, buf, rr);

	if (rw == -1 || rr == -1 || fd == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);

	free(buf);

	return (rw);
}
