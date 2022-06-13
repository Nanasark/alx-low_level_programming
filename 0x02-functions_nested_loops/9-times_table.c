#include "main.h"
/**
 * times_table - prints 9 times table
 */

void times_table(void)
{
	int x = 0, y, t;

	while (x < 10)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		y = 1;
		while (y < 9)
		{
			t = y * x;
			if (t > 9)
			{
				_putchar('0' + (t / 10));
				_putchar('0' + (t % 10));
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + t);
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		t = y * x;
		if (t > 9)
		{
			_putchar('0' + (t / 10));
			_putchar('0' + (t % 10));
		} else
		{
			_putchar(' ');
			_putchar('0' + t);
		}
		_putchar('\n');
		x++;
	}
}
