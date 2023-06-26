#include "variadic_functions.h"

/**
* sum_them_all - sums all parameters passed
* @n: parameter count
* Return: returnts the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list vals;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(vals, n);
	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(vals, int);
		sum += num;
	}
	va_end(vals);
	return (sum);
}
