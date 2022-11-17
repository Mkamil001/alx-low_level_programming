#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array to search from
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which `cmp` function does not
 * return `0`. If no element matches, return `-1`. If size <= `0`, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}
	return (-1);
}

