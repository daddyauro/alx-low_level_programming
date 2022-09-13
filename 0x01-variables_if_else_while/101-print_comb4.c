#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of theree digits
 * Return: 0 (success always)
 */
int main(void)
{
	int n, m, v;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (v = m + 1; v < 10; v++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((v % 10) + '0');
				if (n == 7 && m == 8 && v == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
