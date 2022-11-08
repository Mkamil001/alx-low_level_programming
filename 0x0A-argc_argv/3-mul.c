#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry function: program that multiplies two numbers
 * @argc: number of arguments
 * @argv: an array of pointer to the arguments
 *
 * Return: 0 if success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		prod *= atoi(argv[i]);
	}
	printf("%d\n", prod);
	return (0);
}

