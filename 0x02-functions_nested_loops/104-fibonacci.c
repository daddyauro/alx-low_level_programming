#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, j, k, n, m, o, p;

	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	n = j / 1000000000;
	m = j % 1000000000;
	o = k / 1000000000;
	p = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", o + (p / 1000000000));
		printf("%lu", p % 1000000000);
		o = o + n;
		n = o + n;
		p = p + m;
		m = p + m;
	}
	printf("\n");
	return (0);
}
