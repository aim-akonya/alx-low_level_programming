#include "main.h"

/**
* _memcpy - function that copies n bytes
* from memory area src to memory area dest.
* @dest: Destination memory area
* @src: Source memory area
* @n: number of bytes  to be copied
* Return: Returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
}
