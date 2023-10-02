#include <stdio.h>

/**
 * main - check the code
 * @argc: numbre of commands
 * @argv: Commands array
 * Return: Always 0.
 */
int	main(int argc, char *argv[])
{
while (*argv && argc >= 0)
{
printf("%s\n", *argv);
argv++;
}

return (0);
}
