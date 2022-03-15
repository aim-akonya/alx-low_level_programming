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
_putchar(ab + 48);
}
else
{
_putchar(n + 48);
}
return (0);
}
