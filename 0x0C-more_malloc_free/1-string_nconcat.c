#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenatesthe first n strings in s2 with s1.
 * If n is greater or equal to the length of s2 then use the entire string s2
 * @s1: first string
 * @s2: second string
 * @n: bytes of string to take from s2.
 *
 * Return: a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, total;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s2);
	if (n >= len)
		total = strlen(s1) + strlen(s2);
	else
		total = strlen(s1) + n;
	concat = malloc(sizeof(*concat) * (total + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		if (*(s1 + i) == '\0')
			break;
		*(concat + i) = *(s1 + i);
	}
	for (j = i; j < total; j++)
		*(concat + j) = *(s2 + (j - i));
	*(concat + j) = '\0';
	return (concat);
}
