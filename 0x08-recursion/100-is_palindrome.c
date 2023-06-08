#include "main.h"
#include "string.h"

/**
* compare_characters - compare string characters
* @s: string value
* @start: start index
* @end: end index
* @len: length of the string
* Return: 1 if string if palindome, else 0
*/
int compare_characters(char *s, int start, int end, int len)
{
	if (start < len && end >= 0)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
		return (compare_characters(s, ++start, --end, len));
	}
	return (1);
}

/**
* is_palindrome - checks whether a string is a palindrome
* @s: string parameter
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int start, end;

	start = 0;
	end = strlen(s) - 1;

	return (compare_characters(s, start, end, end + 1));
}