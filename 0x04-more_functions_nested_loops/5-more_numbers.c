#include "main.h"

/**
* more_numbers - print numbers 1 to 14, 10 times
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
        char buffer[2];
        int value = 14;
        
        while (value / 10)
        {
            buffer[j] = value % 10 + '0';
            value = value / 10;
            j++;
        }

        buffer[j] = value + '0';

        for (j = sizeof(buffer) - 1; j >= 0; j--)
        {
            if (buffer[j])
            {
                putchar(buffer[j]);
            }
        }

		_putchar('\n');
	}
}
