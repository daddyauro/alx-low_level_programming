#include "main.h"

/**
 * print_alphabet_x10 - prints alpbet 10 times
 * in lowercase followed by new line
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	n = 0;
	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
