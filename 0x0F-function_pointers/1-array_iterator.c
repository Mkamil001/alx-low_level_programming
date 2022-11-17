#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: array to perform operation on
 * @size: size of the array.
 * @action: a function pointer that determine the action to perform on each
 * element of an array.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}

