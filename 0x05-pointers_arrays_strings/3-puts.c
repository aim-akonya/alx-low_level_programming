#include "main.h"

/**
* _puts - print a string to the stdout
* @str: string input
*/
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
