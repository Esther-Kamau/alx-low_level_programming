#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, res;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');

			res = row * col;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
