#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
