#include "main.h"

/**
 * _abs - check the code
 * @n: number
 * Return: absolute value
 */
int _abs(int n)
{
if (n < 0)
{
int ab = -n;
_putchar('0' + ab);
return (ab);
}
_putchar('0' + n);
return (n);
}
