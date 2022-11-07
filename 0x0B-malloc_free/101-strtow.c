#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * count_string - helper function to count the number of words in a string
 * @str: string
 *
 * Return: count of words in the string.
 */
int count_string(char *str)
{
	int i;
	int words = 0, len;

	len = strlen(str);
	for (i = 1; i <= len; i++)
	{
		if ((*(str + i) == ' ' || *(str + i) == '\0')
		&& *(str + i - 1) != ' ')
			words++;
	}
	return (words);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int i, k = 0, l, m, len, words, each;
	char **tab;

	len = strlen(str);
	words = count_string(str);
	if (words == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		each = 0;
		while (*(str + i) != ' ' && *(str + i) != '\0')
		{
			i++;
			each++;
		}
		if (each == 0)
			continue;
		*(tab + k) = malloc(sizeof(char) * (each + 1));
		if (*(tab + k) == NULL)
		{
			for (l = 0; l < words; l++)
				free(*(tab + l));
			free(tab);
			return (NULL);
		}
		for (m = 0; m < each; m++)
		{
			*(*(tab + k) + m) = *(str + (i - (each - m)));
		}
		*(*(tab + k) + m) = '\0';
		k++;
	}
	*(tab + k) = NULL;
	return (tab);
}
