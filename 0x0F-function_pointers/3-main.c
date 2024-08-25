#include "./3-calc.h"

/**
	* main - main function
	* @ac: args count
	* @av: Array of args as strings
	* Return: 0 in success , non null value otherwise
*/

int main(int ac, char **av)
{
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		return (99);
	}
	if ((av[2][0] == '%' || av[2][0] == '/') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	func = get_op_func(av[2]);
	printf("%d\n", func(atoi(av[1]), atoi(av[3])));
	return (0);
}
