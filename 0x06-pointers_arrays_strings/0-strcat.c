#include "main.h"

/**
* _strcat - concatenates two strings
* @dest:  destination string
* @src: source string
* Return: return a pointer
*/
char *_strcat(char *dest, char *src)
{
	char *ptr;
	int length;

	length = 0;
	while (*dest[i] != '\0')
	{
		length++;
	}

	ptr = dest + length;

	while (*source != '\0')
	{
		*ptr++ = *source++;
	}

	*ptr = '\0';

	return (dest);
}
