#include "main.h"
#include <string.h>

/**
* array_range - creates an array of integers
* @min: minimul value
* @max: maximum value
* Return: returns a pointer to the new array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int s;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	s = (max - min) + 1;

	ptr = (int *) malloc(s * sizeof(int));

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
