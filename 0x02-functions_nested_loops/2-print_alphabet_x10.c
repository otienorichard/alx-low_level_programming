#include "main.h"

/**
*Description: prints alphabet 10times in lowercase
*REturn: 0
*/
void print_alphabet_x10(void)
{
	char d;
	int i = 0;

	while (i < 10)
	{
		d = 'a';
		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');
		i++;
	}
}
