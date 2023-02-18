#include<stdio.h>
/**
* main - The main function
* Return: - 0 if success, 1 if error occurs
*/
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		int j;

		for (j = c + 1; j < 10; j++)
		{
			int f;

			for (f = j + 1; f < 10; f++)
			{
				putchar(c + '0');
				putchar(j + '0');
				putchar(f + '0');
				if (c == 7 && j == 8 && f == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
