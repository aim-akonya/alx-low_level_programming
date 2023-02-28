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

	i = 0;
	for (j = count - 1; j >= 0; j--)
	{
		buffer[i] = s[j];
		i++;
	}

	s = buffer;
}
