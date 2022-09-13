#include <stdio.h>

/**
 * main - prints program for all possible
 * different combinations of two digits
 * Return: 0 (always success)
 */
int main(void)
{
	int n, n1;

	for (n = 0; n < 10; n++)
	{
		for (n1 = 0; n1 < 10; n1++)
		{
			putchar((n % 10) + '0');
			putchar((n1 % 10) + '0');
			if (n == 9 && n1 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
