#include "holberton.h"

/**
 * read_textfile - read_textfile
 * @filename: the name of the filecd
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rw, rr;

	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rr = read(fd, buf, letters);

	rw = write(STDIN_FILENO, buf, rr);

	if (rw == -1 || rr == -1)
		return (0);

	close(fd);

	free(buf);

	return (rw);
}
