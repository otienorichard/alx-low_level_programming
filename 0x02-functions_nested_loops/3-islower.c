#include "main.h"

/**
 * _slower - check for lowercase letter
 * @c : character to check the case
 * Return:0 if lowercase. 1 if uppercase
 */
 int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
