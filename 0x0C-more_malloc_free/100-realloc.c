#include "main.h"

/**
* _realloc - function that reallocates a memory block
* @ptr: pointer to the previous memory allocated with a call to malloc
* @old_size: the size, in bytes, of the allocated space for @ptr
* @new_size: the size, in bytes, of the new memory block
* Return: pointer to the new address space
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *cptr;
	unsigned int i;

	cptr = (char *) ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = cptr[i];
	}
	free(ptr);
	return (new_ptr);
}
