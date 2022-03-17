#include "main.h"
#include <string.h>

/**
* main - hello there
* Return: - returns 1
*
*/
int main(void)
{
char vals[] = "_putchar";
int i = 0;
for (i = 0; (unsigned int) i < strlen(vals); i++)
{
_putchar(vals[i]);
}
_putchar('\n');
return (0);
}
