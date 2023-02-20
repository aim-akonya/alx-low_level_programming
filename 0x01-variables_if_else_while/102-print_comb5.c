#include<stdio.h>

/**
* main - main function
* Return: - retrun 1 if success, 0 error
*/
int main(void)
{
	int c, j, i;

	for (c = 0; c < 100; c++)
	{
		for (j = c + 1; j < 100; j++)
		{
			char buffer[20];

			sprintf(buffer, "%d", c);
			if (c < 10)
			{
				putchar('0');
			}

			for (i = 0; i < 20; i++)
			{
				if (buffer[i] == '\0')
				{
					break;
				}
				putchar(buffer[i]);
			}
			putchar(' ');

			sprintf(buffer, "%d", j);
			if (j < 10)
			{
				putchar('0');
			}

			for (i = 0; i < 20; i++)
			{
				if (buffer[i] == '\0')
				{
					break;
				}
				putchar(buffer[i]);
			}
			if (c == 98 && j == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
