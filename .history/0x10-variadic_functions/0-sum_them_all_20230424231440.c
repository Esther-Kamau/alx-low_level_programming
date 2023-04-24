#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 * Return: The sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
