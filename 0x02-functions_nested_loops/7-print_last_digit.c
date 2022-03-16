#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: - number
 *Return: - returns 0
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;
_putchar(lastDigit + '0');
return (0);
}
