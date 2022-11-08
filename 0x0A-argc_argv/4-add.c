#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry function: A program that adds positive numbers
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
