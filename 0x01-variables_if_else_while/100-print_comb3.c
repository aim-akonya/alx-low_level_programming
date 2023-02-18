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

		for (j = c; j < 10; j++)
		{
			if (c == j)
			{
				continue;
			}
			putchar(c + '0');
			putchar(j + '0');
			if (c == 8 && j == 9)
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
