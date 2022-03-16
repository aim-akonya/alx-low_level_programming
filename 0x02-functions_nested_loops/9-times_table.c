#include "main.h"

/**
 * times_table - Times table
*/
void times_table(void)
{
int i;
for (i = 0; i <= 9; i++)
{
int j;
for (j = 0; j <= 9; j++)
{

int mult = i * j;
if (mult <= 9)
{
_putchar(mult + '0');
}
else
{
_putchar(mult / 10 + '0');
_putchar(mult % 10 + '0');
}

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
