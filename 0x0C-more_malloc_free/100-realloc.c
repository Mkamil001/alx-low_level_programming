#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using `malloc` and `free`.
 * The contents will be copied to the newly allocated space, in the range
 * from the start of `ptr` up to the minimum of the old and new sizes.
 * If `new_size` > `old_size`, the "added" memory won't be initialized.
 * If `new_size` == `old_size`, the program will return `ptr`
 * If `ptr` is NULL, then the call is equivalent to `malloc(new_size).
 * If `new_size` is equal to zero, and `ptr` is not `NULL`, the call is
 * equivalent to `free(ptr)` and will return `NULL`.
 *
 * @ptr: the memory block to reallocate
 * @old_size: the size, in bytes, of the allocated space for `ptr`
 * @new_size: the new size, in bytes, of the new memory block.
 *
 * Return: the reallocated memory block if success and NULL otherwise.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newalloc, *oldalloc;
	unsigned int i, min_size;

	if (old_size < new_size)
		min_size = old_size;
	else if (old_size > new_size)
		min_size = new_size;
	else
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	oldalloc = (char *) ptr;
	newalloc = malloc(new_size);
	for (i = 0; i < new_size; i++)
	{
		if (i == min_size)
			break;
		*(newalloc + i) = *(oldalloc + i);
	}
	free(ptr);
	return (newalloc);
}
