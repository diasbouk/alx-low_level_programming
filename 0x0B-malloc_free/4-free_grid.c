#include "main.h"

/**
 * free_grid - frees a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
grid = alloc_grid(height, height);
free(grid);
}
