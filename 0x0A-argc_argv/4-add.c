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
	int i;
	int count;

	count = 0;

	for (i = 1; i < argc; i++)
	{
		char *end_ptr;
		long val;
		int num;

		val = strtol(argv[i], &end_ptr, 10);
		/* check if string cannot be converted*/
		if (end_ptr == argv[i])
		{
			printf("Error\n");
			exit(1);
		}

		/*check, number contains invalid characters */
		if ('\0' != *end_ptr)
		{
			printf("Error\n");
			exit(1);
		}

		num = (int) val;
		count += num;
	}

	printf("%d\n", count);

	return (0);
}
