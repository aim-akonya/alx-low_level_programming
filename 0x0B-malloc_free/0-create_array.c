#include "main.h"

/**
* create_array - create an ayyau of characters
* @size: size of the array;
* @c: character to initialize the array
* Return: returns a pointer to the array created
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	str = (char *) malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
