#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action function to take
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
