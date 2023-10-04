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
int money = atoi(argv[1]);
int coins = 0;
if (argc)
{
if (argv[2] || !argv[1])
{
printf("Error\n");
}
while (money >= 25)
{
coins++;
money = money - 25; 
}
while (money >= 10)
{
coins++;
money = money - 10; 
}
while (money >= 5)
{
coins++;
money = money - 5; 
}
while (money >= 2)
{
coins++;
money = money - 2; 
}
while (money >= 1)
{
coins++;
money = money - 1; 
}
printf("%d\n", coins);
}
return (0);
}
