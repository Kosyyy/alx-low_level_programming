#include <stdio.h>

/**
 *main - print a all possible combinations of two two-digit numbers from 0-99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, p, y;

	for (i = 0; i < 100; i++) /*print first two digit combo*/
	{
		for (p = i + 1; p < 10; p++)
		{
			for (y = p + 1; y < 10; y++)
			{
					putchar((i % 10) + '0');
					putchar((p % 10) + '0');
					putchar((y % 10) + '0');

					if (i == 7 && p == 8 && y == 9)
					continue;

					putchar(',');
					putchar(' ');
			}
			}
			}
			putchar('\n');
			return (0);
}
