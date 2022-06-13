#include "main.h"

/**
 * jack_bauer - prints minutes of time
 */

void jack_bauer(void)

{
	int p = 0, q, x, y;
	while (p < 3)
	{
		q = 0;

		while (q < 10)

		{
			x = 0;
			while (x < 6)
			{
				y = 0;

				while (y < 10)
				{
					_putchar('0' + p);
					_putchar('0' + q);
					_putchar(':');
					_putchar('0' + x);
					_putchar('0' + y);
					_putchar('\n');
					y++;
				}
				x++;
			}
			q++;
			if (p == 2 && q == 4)
				break;
		}
		p++;
	}

}
