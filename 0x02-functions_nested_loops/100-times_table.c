#include "main.h"
/**
 * prints_times_table - prints time table
 * @n : times table to use
 * Return:void
 */
void times_table(void)
{
	int

	if (n < 0 || n > 15)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			rep = x * y;
			if (y == 0)
_putchar('0' + rep);
			else if (rep < 10)
			{
_putchar(' ');
_putchar(' ');
_putchar('0' + rep);
			}
			else if(rep < 100)
			{
_putchar(' ');
_putchar('0' + rep / 10);
_putchar('0' + rep % 10);
			}
			if (y < n)
			{
_putchar(',');
_putchar(' ');
			}
			_putchar('\n');
			x++;
		}
	}
}
