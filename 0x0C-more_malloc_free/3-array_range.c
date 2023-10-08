#include "main.h"

/**
 * array_range - prints buffer in hexa
 * @min: Min
 * @max: Max
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
    int *ptr = malloc((max - min) * sizeof(int));
    int i;
    int j = 0;
        if (min > max)
            return (NULL);
        if (ptr == NULL)
            return (NULL);
    for (i = min; i <= max; i++)
    {
            ptr[j] = i;
            j++;
    }
    return (ptr);
    free(ptr);
}
