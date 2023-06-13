#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* count - count min number of coins
*/
int count(int coins[], int sum)
{
	// todo
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
	int cents, depth;
	int coins[5] = {25, 10, 5, 2, 1};

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



	return (0);
}
