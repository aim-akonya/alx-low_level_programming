#include "main.h"

/**
* strtow - splits a string into words
* @str: string to be split
* Return: pointer to an array of strings;
*/
char **strtow(char *str)
{
	/*should split a string into an array of strings*/
	char *arrStr;
	int wordCount;
	int maxWordLen;
	int i;

	wordCount = 0;
	maxWordLen = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			// update status
			// include status updates
			printf("Reached\n");
			continue;
		}
		else
		{

		}
	}
	return (NULL);

}
