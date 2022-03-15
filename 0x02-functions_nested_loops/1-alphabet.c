#include <stdio.h>
#include "main.h"

/**
*main - Entry point
*Description: printing  alphabets in lowercase
*Return;
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z');
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
} 
