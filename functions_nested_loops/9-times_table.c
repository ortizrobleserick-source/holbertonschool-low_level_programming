#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: each row of the table goes from 0 to 9,
 * numbers separated by commas and properly spaced
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
