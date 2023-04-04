#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: forst entry
* @s2: second string
* Return: returns a pointer to a string containing the concatenated values
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int total;
	char *str_concat;

	len1 = 0;
	len2 = 0;
	while (s1 != NULL && s1[len1] != '\0')
	{
		len1++;
	}

	while (s2 != NULL && s2[len2] != '\0')
	{
		len2++;
	}

	total = len1 + len2;

	str_concat = (char *) malloc(total + 1);
	if (str_concat == NULL)
	{
		return (NULL);
	}

	while (s1 != NULL && s1[len1] != '\0')
	{
		len1++;
	}


	str_concat[len1 + len2] = '\0';

	return str_concat;
}