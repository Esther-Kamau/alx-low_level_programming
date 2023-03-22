#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* If c is between 'a' and 'z' in ASCII table, return 1 */
	if (c >= 'a' && c <= 'z')
		return (1);
	/* Otherwise, return 0 */
	else
		return (0);
}
