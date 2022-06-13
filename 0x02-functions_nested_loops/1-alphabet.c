#include "main.h"

#include <ctype.h>


/**
 * print_alphabet - prints alphabets
 */

void print_alphabet(void)

{

	char my_alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',

		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',

		'X', 'Y', 'Z'};


	int x = 0;


	while (x < 26)

	{

		_putchar(tolower(my_alpha[x]));

		x++;

	}

	_putchar('\n');

}
