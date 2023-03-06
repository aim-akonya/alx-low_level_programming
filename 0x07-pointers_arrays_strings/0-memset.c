#include "main.h"

/**
* _memset - _memset function fills the first
* n bytes of the memory area pointed to by s with the constant byte c
* @s: parameter pointing to the memory area being worked on
* @b: character to use in filling up the first n bytes
* @n: representes memory area to be filled
* Return: returns a poiter to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		*s++ = b;
	}

	return s;
}
