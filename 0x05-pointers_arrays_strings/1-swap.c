#include "main.h"

/**
* swap_int - swap two values
* @a: firt int param
* @b: seconf int param
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a =  *b;
	*b = temp;

}
