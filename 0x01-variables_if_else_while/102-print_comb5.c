#include <stdio.h>

/**
 *main - print a all possible combinations of two two-digit numbers from 0-99
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
<<<<<<< HEAD
=======
		{
>>>>>>> adb5e6cab117fa08f9708361d4502a243e7155d3

			if (p > i)
			{
					putchar((i / 10) + '0');
					putchar((i % 10) + '0');
					putchar(' ');
					putchar((p / 10) + '0');
					putchar((p % 10) + '0');

					if (i != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
	}
	putchar('\n');
	return (0);
}

