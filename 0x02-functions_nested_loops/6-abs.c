#include "main.h"

/**
 * _abs - check the code
 * @n: number
 * Return: 0
 */
int _abs(int n)
{
if (n < 0)
{
int ab = -n;
_putchar(ab + "0");
}
else
{
_putchar(n + '0');
}
return (0);
}
