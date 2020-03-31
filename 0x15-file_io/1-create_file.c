#include "holberton.h"

/**
 * create_file -create_file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, rw;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	rw = write(fd, text_content, len);

	if (rw == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);

}
