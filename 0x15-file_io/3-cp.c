#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void arg_error(int arg_num);
char *mall_error(char *to_file);
/**
 * main - mian func
 * @argc: argc (we know)
 * @argv: (you know)
 * Return: Always 0 (on Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, size_read, er_from, er_to, er;
	char *buff;

	arg_error(argc);
	buff = mall_error(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	size_read = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || size_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		er = write(fd_to, buff, size_read);
		if (er == -1 || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		size_read = read(fd_from, buff, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (size_read >= 1);
	er_from = close(fd_from);
	if (er_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		free(buff);
		exit(100);
	}
	er_to = close(fd_to);
	if (er_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		free(buff);
		exit(100);
	}
	free(buff);
	return (0);
}

/**
 * arg_error - is the right num of argument
 * @arg_num: number of argument
 */
void arg_error(int arg_num)
{
	if (arg_num != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * mall_error - creat buffer and check for error
 * @to_file: file name
 * Return: the buffer
 */
char *mall_error(char *to_file)
{
	char *buff;

	buff = malloc(1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
		exit(99);
	}
	return (buff);
}
