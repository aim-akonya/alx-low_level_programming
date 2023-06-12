#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main -  main function
* @argc: arguments count
* @argv: array of strings
* Return: 0
**/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		exit(1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a*b);

	return(0);
}
