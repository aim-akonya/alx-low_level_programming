#include "main.h"

/**
* strtow - splits a string into words
* @str: string to be split
* Return: pointer to an array of strings;
*/
char **strtow(char *str)
{
	char * name;
	int i;
	int start_idx, end_idx;

	if (str == NULL || str == "")
	{
		return (NULL);
	}

	i = 0;
	start_idx = -1;
	end_idx = -1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			continue;
		}
	}

}
