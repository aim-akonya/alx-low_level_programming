#include "main.h"

/**
* string_nconcat - concat two strings
* @s1: first string
* @s2: second string
* @n: size of s2 to be copied
* Return: returns pointer to the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total, s2_idx, i;
	char *str_concat;

	len1 = len2 = 0;
	while (s1 != NULL && s1[len1] != '\0')
	{
		len1++;
	}

	while (s2 != NULL && s2[len2] != '\0')
	{
		len2++;
	}
	len2 = n <= len2 ? n : len2;

	total = len1 + len2;
	str_concat = (char *) malloc(total + 1);
	if (str_concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		if (i < len1)
		{
			str_concat[i] = s1[i];
		}
		else
		{
			s2_idx = len2 - (total - i);
			str_concat[i] = s2[s2_idx];
		}
	}
	str_concat[len1 + len2] = '\0';
	return (str_concat);
}
