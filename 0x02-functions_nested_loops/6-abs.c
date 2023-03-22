#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: integer argument.
 *
 * Return: the absolute value of @n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
