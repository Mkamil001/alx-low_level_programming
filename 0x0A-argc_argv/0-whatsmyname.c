#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function: print the name of the program
 * @argc: number of arguments
 * @argv: array of pointers to each argument.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}

