#include "main.h"

int count_str_len(char *s, int index, int len)
{
	if (s[index] != '\0')
	{
		return (count_str_len(s, ++index, ++len));
	}

	return (len);
}

int _strlen_recursion(char *s)
{
	int index;
	int len;

	index = 0;
	len = 0;

	return (count_str_len(s, index, len));
}