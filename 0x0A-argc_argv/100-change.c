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
int money;
int coins = 0;
if (argc < 2 || argc > 2)
{
printf("Error\n");
return (1);
}
else
{
money = atoi(argv[1]);
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
