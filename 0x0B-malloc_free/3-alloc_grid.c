#include "main.h"

/**
 * print_grid - prints a grid of integers
 * @alloc_grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **newStr;
int i, j;
if (width == 0 && height == 0)
{
return (NULL);
}
newStr = malloc((height * width) * sizeof(int));
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
newStr[i][j] = 0;
j++;
}
i++;
}
if (newStr == NULL)
{
return (NULL);
}
return (newStr);
free(newStr);
}
