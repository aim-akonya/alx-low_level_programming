#include "main.h"

/**
* print_rev - reverses a string
* @s: the input string
*/
void print_rev(char *s)
{
	int count, j;

	for (count = 0; s[count] != '\0'; count++)
	{
		continue;
	}

	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
