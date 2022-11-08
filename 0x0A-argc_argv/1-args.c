#include <stdio.h>

/**
 * main - Entry function: prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: An array of pointer to each arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

