#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - function to create a file
 * @filename : you know
 * @text_content : NULL terminated string to put in file
 * Return: 1 on success , -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file_text;
		if (!filename)
			return (-1);
		if (text_content == NULL)
			*text_content = '\0';
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		file_text = write(fd, text_content, strlen(text_content));
		if (file_text == -1)
			return (-1);
		close(fd);
		return (1);
}

