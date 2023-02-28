#include "main.h"

/**
* rev_string - reverses a string
* @s: the input string
*/
void rev_string(char *s)
{
	int count, j, i;

	char *buffer =  s;

	for (count = 0; s[count] != '\0'; count++)
	{
		continue;
	}


	for (j = count - 1, i = 0; j >= 0, i < count; j--, i++)
	{
		buffer[i] = s[j];
	}

	s = buffer;
}
