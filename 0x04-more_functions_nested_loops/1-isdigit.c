#include "main.h"
/**
 * _isdigits - checks for digit
 * @c: parameter checks
 * Return: 1 if found
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
