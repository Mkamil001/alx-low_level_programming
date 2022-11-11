#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * The array created contain all the values from `min` (included) to `max`
 * (included), ordered from `min` to `max`
 * @min: minimum numberin the array
 * @max: maximum number in the array
 *
 * Return: the pointer to the array.
 */
int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
		*(array + i++) = min++;
	return (array);
}
