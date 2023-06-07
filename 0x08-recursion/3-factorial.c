#include "main.h"

/**
* factorial - computes and returns the factorial of a number
* @n: number
* Return: returns factorial of a number
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (n * factorial(n + 1));
	}
	return (n * factorial(n - 1));
}
