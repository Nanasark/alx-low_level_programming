#include <ctype.h>


/**
 * _isalpha - returns boolean of uppercase c
 * @c: char to be evaluated for uppercase
 * Return: 1 if true or 0 if false
 */

int _isalpha(int c)

{

	if (isalpha(c))

		return (1);

	else

		return (0);

}
