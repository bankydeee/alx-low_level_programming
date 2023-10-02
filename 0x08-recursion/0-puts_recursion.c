#include "main.h"
/**
 * _puts_recursion - function puts();
 * @n: input
 * Return: Always 0
 */
void _puts_recursion(char *n)
{
	if (*n)
	{
		_putchar(*n);
		_puts_recursion(n + 1);
	}
	else
		_putchar('\n');
}
