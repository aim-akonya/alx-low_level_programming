#include "main.h"
#include <string.h>

/**
* _strcat - concatenates two strings
* @dest:  destination string
* @src: source string
* Return: return a pointer
*/
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest + strlen(dest);

	while (*source != '\0')
	{
		*ptr++ = *source++;
	}

	*ptr = '\0';

	return (dest);
}
