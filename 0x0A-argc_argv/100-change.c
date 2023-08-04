#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
* count_bottom_up - count min number of coins
*/
int count_bottom_up()
{
	return (0);
}


/**
* count - count min number of coins
* @coins: list of coins
* @n: - length of the list of coins
* @sum: sum of change expected
* Return: min number of coints, to make the given change
*/
int count(int coins[], int n, int sum)
{
	int i;
	int minCount;

	if (sum == 0)
	{
		return (0);
	}

	minCount = INT_MAX;

	for (i = 0; i < n; i++)
	{
		if (coins[i] <= sum)
		{
			int currentCount;

			currentCount = count(coins, n, sum - coins[i]);
			if (currentCount + 1 < minCount)
				minCount = currentCount + 1;
		}
	}

	return (minCount);
}

/**
* main -  main function
* @argc: arguments count
* @argv: array of strings
* Return: 0
**/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int cents, total;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
	}

	total = count(coins, 5, cents);
	printf("%d\n", total);
	return (0);
}
