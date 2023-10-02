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
i = 1;
count = 0;
if (argc)
{
if (atoi(argv[i]))
{
for (i = 1; i < argc; i++)
{
count = count + atoi(argv[i]);
}
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", count);
return (0);
}
