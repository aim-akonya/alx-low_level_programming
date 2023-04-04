#include "main.h"

/**
* print - prints an item
* @s: string buffer
* @index: index of print buffer
*/
void print(char *s, int index)
{
	if (s[index] != '\0')
	{
		_putchar(s[index]);
		print(s, ++index);
	}
}

/**
* _print_rev_recursion - prints a string in reverse
* @s: string value
*/
void _print_rev_recursion(char *s)
{
	int count;

	count = 0;
	print(s, count);
}