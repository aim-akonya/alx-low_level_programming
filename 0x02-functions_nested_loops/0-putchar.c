#include <unistd.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* main - hello there
* Return: - returns 1
*
*/
int main(void)
{
char vals[] = "_putchar";
for (int i = 0; i < strlen(vals); i++)
{
_putchar(vals[i]);
}
_putchar('\n');
return (0);
}
