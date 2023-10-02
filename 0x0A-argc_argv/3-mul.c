#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: numbre of commands
 * @argv: Commands array
 * Return: Always 0.
 */
int	main(int argc, char *argv[])
{
int i;
i = 0;
if (argc != 3)
{
printf("Error\n");
}
else
i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);
return (0);
}
