#include <stdio.h>

/**
 * main - prints all possible combinations
 * of two two-digit numbers.
 * Return: 0 (always succed)
 */
int main(void)
{
	int n, m
		;
	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; n <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}