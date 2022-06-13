#include "main.h"

#include <ctype.h>


/**
 * print_alphabet_x10 - prints 10X alphabets
 */

void print_alphabet_x10(void)

{

	char my_alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',

		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',

		'X', 'Y', 'Z'};


	int j = 0, x;


	while (j < 10)

	{

		x = 0;


		while (x < 26)

		{

			_putchar(tolower(my_alpha[x]));

			x++;

		}

		_putchar('\n');

		j++;

	}

}
