#include "main.h"

/**
 * print_diagsums- check the code
 * @a: multi-dimension array
 * @size: size of array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i, j, sum;
sum = 0;
int *b;
b = a[0];
for (i = 0; i < size; i++)
{
a[i] = *b;
for (j = 0; j < size; j++)
{
if (i == j)
{
sum = sum + b[j];
}
}
}
printf("%d", sum);
}
