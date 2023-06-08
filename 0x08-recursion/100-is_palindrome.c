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
	if (start < len-1)
	{

	}
}

/**
* is_palindrome - checks whether a string is a palindrome
* @s: string parameter
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int start, end, len;

	start = 0;
	len = strlen(s);
	end = len - 1;

	return (compare_characters(s, start, end, len));
}