#include "./function_pointers.h"
/**
	* int_index - Searches for a string in an array
	* @array: Array to loop through
	* @size: Size of array
	* @cmp: Pointer to function to compare values
	* Return: index of the first match, or 0 if it fails
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < -1)
		return (-1);
	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
