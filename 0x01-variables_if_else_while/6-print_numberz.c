#include <stdio.h>

/*
 * main - prints single numbers of base 10
 * from 0 going up
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
