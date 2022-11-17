#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * @argc: number of arguments
 * @argv: an array of pointers to each arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < arg; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < arg - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

