#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* count - count min number of coins
*/
int count(int coins[], int n, int sum)
{
	if (sum == 0)
	{
		return (1);
	}

	if (sum < 0)
	{
		return (0);
	}

	if (n <= 0)
	{
		return 0;
	}
	return count(coins, n - 1, sum) + count(coins, n, sum - coins[n - 1]);
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
	int coins[5] = {5, 2, 1, 25, 10};

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
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
