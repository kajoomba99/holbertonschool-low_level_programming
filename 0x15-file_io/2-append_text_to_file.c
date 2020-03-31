#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, rw;

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

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
