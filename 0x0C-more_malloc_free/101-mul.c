#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *_strrev(char *s);
char *multiply_index(char *s1, char *s2);
char *string_product(int *p, char *s1, char *s2);

/**
 * multiply_index - multiplies each value of the string correspondingly with
 * the other string.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: the product of the two strings
 */
char *multiply_index(char *s1, char *s2)
{
	int i, j, len1, len2, *p;
	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	s1 = _strrev(s1);
	s2 = _strrev(s2);
	p = malloc((len1 + len2) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (len1 + len2); i++)
		p[i] = 0;
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
			p[i + j] += (s1[i] - '0') * (s2[j] - '0');
	}
	s = string_product(p, s1, s2);
	free(p);
	return (s);
}

/**
 * _strrev - reverses a string
 * @s: string to be reversed
 *
 * Return: the reversed string
 */
char *_strrev(char *s)
{
	int len, i;
	char c;

	len = strlen(s);
	len--;
	for (i = 0; i < len; i++)
	{
		c = s[i];
		s[i] = s[len];
		s[len] = c;
		len--;
	}
	return (s);
}

/**
 * string_product - converts an array of integers into a string
 * @p: array of integers
 * @s1: the first string that was multiplied with the second string
 * @s2: the second string
 *
 * Return: the product of the two strings in string format
 */
char *string_product(int *p, char *s1, char *s2)
{
	int i, j, len, *p2;
	char *s;

	len = strlen(s1) + strlen(s2);
	p2 = malloc(len * sizeof(int));
	if (p2 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p2[i] = p[i] % 10;
		if ((i + 1) < len)
			p[i + 1] += p[i] / 10;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		s[j] = p2[len - j - 1] + '0';
	s[j] = '\0';
	free(p2);
	return (s);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or exit status 98 if the program failed.
 */
int main(int argc, char *argv[])
{
	int i, j, len;
	char *s, *strshift;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	s = multiply_index(argv[1], argv[2]);
	if (s == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	len = strlen(s);
	if (len > 1)
	{
		for (i = 0; i < len - 1; i++)
		{
			if (s[i] == '0')
				;
			else
				break;

		}
	}
	strshift = s + i;
	printf("%s\n", strshift);
	free(s);
	return (0);
}

