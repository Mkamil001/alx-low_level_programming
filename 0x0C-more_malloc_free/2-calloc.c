#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * @nmemb: the number of element
 * @size: the bytes of each element.
 *
 * Return: a void pointer pointing to the allocated space intialized with 0 and
 * NULL if the nmemb or size is 0 or the malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
