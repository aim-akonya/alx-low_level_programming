#include "main.h"

/**
* str_to_int - converts a string to int
* @str: string to be converted
* Return: returns a string representation of the value
*/
int str_to_int(char * str)
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
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	int val1 = 

	return (0);
}