#include "main.h"

/**
 * read_textfile -  function to read and print content of a file
 * @filename : name of file
 * @letters : number of letters to reead from file
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t number_of_letters;
	size_t memory_num;
	int file_ret;
	char *buffer;
		if (filename == NULL)
			return (0);
		buffer  = malloc(letters);
		if (buffer == NULL)
			return (0);
		file_ret = open(filename, O_RDONLY);
		if (file_ret < 0)
			return (0);
		memory_num = read(file_ret, buffer, letters);
		number_of_letters = write(STDOUT_FILENO, buffer, memory_num);
		free(buffer);
		close(file_ret);
		return (number_of_letters);
}
