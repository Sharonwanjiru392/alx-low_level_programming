#include "main.h"

/**
 * _put_recursion - print a string followed by a new line
 * @s: the string to print
 *
 * Return: Nothing.
 */
void _put-recursion(char *s)
{
	if (*s =='\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_put_recursion(s);
}
