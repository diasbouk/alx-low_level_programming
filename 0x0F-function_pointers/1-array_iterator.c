#include "./function_pointers.h"

/**
	* array_iterator - Iterates an arrayw with an action
	* @array: Array to iterate
	* @size: size of the array
	* @action: Function to call on each of the array elements
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (!array || !action)
		return;
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
