#include <ctype.h>


/**
 * _islower - returns boolean of lowercase c
 * @c: char to be evaluated for lowercase
 * Return: 1 if true or 0 if false
 */

int _islower(int c)

{

	if (islower(c))

		return (1);

	else

		return (0);

}
