#include "main.h"

/**
* str_to_int - converts a string to int
* @str: string to be converted
* Return: returns a string representation of the value
*/
int str_to_int(char *str)
{
	long val;
	char *end_ptr;

	val = strtol(str, &end_ptr, 10);
	/* check if string cannot be converted*/
	if (end_ptr == str)
	{
		printf("Error\n");
		exit(98);
	}

	/*check, number contains invalid characters */
	if ('\0' != *end_ptr)
	{
		printf("Error\n");
		exit(98);
	}

	return ((int) val);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments passed to the program
* @argv: character arguments array
* Return: return 0 is success, other value otherwise
*/
int main(int argc, char **argv)
{
	int val1, val2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = str_to_int(argv[1]);
	val2 = str_to_int(argv[2]);

	printf("%d\n", val1 * val2);

	return (0);
}
