#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next, sum = 2;

	while (fib2 < 4000000)
	{
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;

		if (next % 2 == 0)
			sum += next;
	}

	printf("%lu\n", sum);

	return (0);
}
