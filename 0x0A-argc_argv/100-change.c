#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main -  main function
* @argc: arguments count
* @argv: array of strings
* Return: 0
**/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int cents;

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
