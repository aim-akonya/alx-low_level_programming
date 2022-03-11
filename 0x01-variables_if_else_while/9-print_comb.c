#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * Return: returns 0
*/
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
putchar(c + '0');
if ( c != 9)
{
putchar(',');
putchar('\t');
}
}
putchar('\n');
return (0);
}
