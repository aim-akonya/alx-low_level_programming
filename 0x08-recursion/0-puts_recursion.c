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
* _puts_recursion - prints a string
* @s: string
*/
void _puts_recursion(char *s)
{
	int len;

	len = 0;
	print(s, len);
	_putchar('\n');
}


