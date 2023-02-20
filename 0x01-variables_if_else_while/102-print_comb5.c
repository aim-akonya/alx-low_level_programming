#include<stdio.h>
#include<stdlib.h>

/**
* main - main function
* Return: - retrun 1 if success, 0 error
*/
int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		char j;

		for (j = c + 1; c < 100; c++)
		{
			char buffer[20];

			sprintf(buffer, "%d", c);
		}
	}
	putchar('\n');
	return (0);
}
