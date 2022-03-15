#include <stdio.h>
#include "main.h"
/**
*main - Entry point
*Description: prints alphabets in lowercase
*/
void print_alphabet(void)
{
	int n;
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
