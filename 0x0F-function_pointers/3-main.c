#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a program that perform simple operations
 * @argc: number of arguments
 * @argv: an array of pointer containing the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(*(argv + 2));
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(*(argv + 3)) == 0) && (strcmp(*(argv + 2), "/") == 0 ||
				strcmp(*(argv + 2), "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(atoi(*(argv + 1)), atoi(*(argv + 3))));
	return (0);
}

