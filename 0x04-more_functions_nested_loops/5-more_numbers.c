#include "main.h"

/**
* more_numbers - print numbers 1 to 14, 10 times
*/
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int value;

		for (value = 0; value <= 14; value++)
		{
			char buffer[2];
			int j, num;

			num = value;
			if (num < 10)
			{
				_putchar(num + '0');
				continue;
			}

			for (j = 0; j < 2; j++)
			{
				buffer[j] = num % 10 + '0';
				num = num / 10;
			}

			for (j = 1; j >= 0; j--)
			{
				if (buffer[j])
				{
					_putchar(buffer[j]);
				}
			}
		}
		_putchar('\n');
	}
}
