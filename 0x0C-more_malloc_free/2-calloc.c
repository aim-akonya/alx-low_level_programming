#include "main.h"
#include <string.h>

/**
* _calloc- allocates memory for an array of nmemb elements of size size
* @nmemb: members of the array
* @size: size of the array
* Return: returns a pointer to the block of memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int s;

	s = nmemb * size;
	if (s == 0)
	{
		return (NULL);
	}

	ptr = malloc(s);
	if (ptr == NULL)
	{
		return (NULL);
	}


	memset(ptr, 0, s);

	return (ptr);
}
