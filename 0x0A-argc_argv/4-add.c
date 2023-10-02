#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: numbre of commands
 * @argv: Commands array
 * Return: Always 0.
 */
int	main(int argc, char *argv[])
{
int i, count;
count = 0;
if (argc)
{
for (i = 1; i < argc; i++)
{
count = count + atoi(argv[i]);
}
}
printf("%d\n", count);
return (0);
}
