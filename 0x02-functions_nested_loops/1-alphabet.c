#include "main.h"
/**
*main - Entry point
*Description: prints alphabets in lowercase
*/
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);

	}
	putchar('\n');
}
