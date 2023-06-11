#include "main.h"
#include <stddef.h>
/**
* _strchr - function that locates the first
* occurance of a character in a string
* @s: character array representing the string
* @c: character value to search for
* Return: returns a pointer to the first occurence of the character, or NULL
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
