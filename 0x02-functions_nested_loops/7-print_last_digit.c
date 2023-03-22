#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer argument.
 *
 * Return: the value of the pld.
 */
int print_last_digit(int n)
{
	int pld;

	pld = (n % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
