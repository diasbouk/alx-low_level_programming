#include "main.h"

/**
 * print_chessboard - check the code
 * @a: chessBoard to print
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
j = 0;
for (i = 0; i < 8; i++)
{
for ( j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}