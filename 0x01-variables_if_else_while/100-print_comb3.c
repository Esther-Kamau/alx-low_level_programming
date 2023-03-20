#include <stdio.h>

/**
 * main - Prints two-digit numbers with no repeating digits
 *
 * Return: Always (Success)
 */

int main(void)
{
	int tens_digit, ones_digit;

	for (tens_digit = 0; tens_digit <= 9; tens_digit++)
	{
		for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');

			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
