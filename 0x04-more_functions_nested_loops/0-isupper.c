#include <stdio.h>
#include "main.h"

/**
* _isupper - checks whether the given character is uppercase
* @c: The character to check
* Return: On succes, 1, else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
