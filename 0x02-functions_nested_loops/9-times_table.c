#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: always
 */
void times_table(void)
{
	int n, m, y;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			y = n * m;
			if (m == 0)
			{
				_putchar(y + '0');
			}
			if (y < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			} else if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
