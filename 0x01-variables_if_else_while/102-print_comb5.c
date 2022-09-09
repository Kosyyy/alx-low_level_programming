#include <stdio.h>

/**
 *main - print a all possible combinations of two two-digit numbers from 0-99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int p;
	int y;
	int z;

	for (i = '0'; i <= '9'; i++)
	{
		for (p = '0'; p <= '9'; p++)
		{
			for (y = p + 1; y <= '9'; y++)
			{
				for (z = ones + 1; z <= '9'; z++)
				{
					putchar(i);
					putchar(p);
					putchar(' ');
					putchar(y);
					putchar(z);

					if (!((i == '9' && p == '8') &&
								 (y == '9' && z == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				z = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}

