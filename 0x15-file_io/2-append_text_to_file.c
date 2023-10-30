#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends to a file
 * @filename: as always
 * @text_content: appended
 * Return: 1 || -1 (You know)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_ret;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		num_ret = write(fd, text_content, strlen(text_content));
	if (num_ret == -1)
		return (-1);
	close(fd);
	return (1);
}
