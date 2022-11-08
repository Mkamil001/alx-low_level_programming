#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min_coin(int, int);
int range_and_min(int);

/**
 * range_and_min - Check the range of the input and use it to find the min
 * @value: input to check
 *
 * Return: minimum numbers of coin
 */
int range_and_min(int value)
{
	if (value == 1)
		return (min_coin(value, 1));
	else if (value >= 2 && value < 5)
		return (min_coin(value, 2));
	else if (value >= 5 && value < 10)
		return (min_coin(value, 5));
	else if (value >= 10 && value < 25)
		return (min_coin(value, 10));
	else
		return (min_coin(value, 25));
}

/**
 * min_coin - Find the minimum number of coin recursively
 * @value: the cents
 * @num: number to start division with.
 *
 * Return: minimum number of coin to make change.
 */
int min_coin(int value, int num)
{
	int init;

	init = value / num;
	if ((value % num) == 0)
		return (init);
	return (init + range_and_min(value % num));
}

/**
 * main - Entry function: Prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 1 if success and 0 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if ((atoi(argv[1]) <= 0))
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", (range_and_min(atoi(argv[1]))));
	return (0);
}

