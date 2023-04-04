#include "main.h"

/**
* _calloc- allocates memory for an array of nmemb elements of size size
* @nmemb: members of the array
* @size: size of the array
* Return: returns a pointer to the block of memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;


	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
