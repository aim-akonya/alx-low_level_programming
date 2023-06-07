#include "main.h"

/**
* count_str_len - recursive function that return length of the string
* @s: string entry
* @index: buffer index
* @len: computed length of the string
* Return: return an int value representing length of an array
*/
int count_str_len(char *s, int index, int len)
{
	if (s[index] != '\0')
	{
		return (count_str_len(s, ++index, ++len));
	}

	return (len);
}

/**
* _strlen_recursion - compute length of a string
* @s: character string
* Return: returns length of the string
*/
int _strlen_recursion(char *s)
{
	int index;
	int len;

	index = 0;
	len = 0;

	return (count_str_len(s, index, len));
}
