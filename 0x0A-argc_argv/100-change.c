#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* count - count min number of coins
*/
int count(int coins[], int total_coins, int current_sum, int target_sum, int index, int iterations)
{
	int i;

	if (current_sum > target_sum)
	{
		return (0);
	}

	if (current_sum == target_sum)
	{
		printf ("Found target sum in %d iteration", iterations);
		/**return (current_sum);**/
	}

	for (i = 0; i < total_coins; i++)
	{
		int new_sum, iter, next;
		new_sum = current_sum + coins[i];

		iter = iterations +1;
		next = index + 1;
		return (count(coins, total_coins, new_sum, target_sum, next, iter));
	}
	return (0);
}

/**
* main -  main function
* @argc: arguments count
* @argv: array of strings
* Return: 0
**/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int cents;
	int coins[5] = {5, 2, 1, 25, 10};

	if (argc != 2)
	{
		printf("Error");
		exit (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
	}

	count(coins, 5, 0, cents, 0, 0);

	return (0);
}
