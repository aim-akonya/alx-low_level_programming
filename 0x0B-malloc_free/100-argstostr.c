#include "main.h"
#include "string.h"

/**
* argstostr - concatenates all the arguments of your program
* @ac: arguments count
* @av: array of strings
* Return: returns a pointer to the new ly created string
*/
char *argstostr(int ac, char **av)
{
	char *str_concat;
	int i, total_len, n;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		int str_pt;
		char *val;

		val = av[i];
		str_pt = 0;
		while (val[str_pt] != '\0')
		{
			str_pt++;
			total_len++;
		}
	}

	total_len += ac;

	str_concat = malloc(total_len + 1);
	if (str_concat == NULL)
	{
		return (NULL);
	}

	n = 0;
	for (i = 0; i < ac; i++)
	{

		int str_pt;
		char *val;

		val = av[i];
		str_pt = 0;
		while (val[str_pt] != '\0')
		{
			str_concat[n] = val[str_pt];
			str_pt++;
			n++;
		}
		str_concat[n] = '\n';
		n++;
	}
	str_concat[total_len] = '\0';
	return (str_concat);
}
