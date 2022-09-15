#include <stdio.h>

/**
 * main - prints sum of the even valued terms,
 * followed by new line
 * Return: always 0
 */
int main(void)
{
	unsigned long fib = 0, fib1 = 1, fibsum;
	float t_sum;

	while (1)
	{
		fibsum = fib + fib1;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			t_sum += fibsum;
		fib = fib1;
		fib1 = fibsum;
	}
	printf("%.0f\n", t_sum);
	return (0);
}

