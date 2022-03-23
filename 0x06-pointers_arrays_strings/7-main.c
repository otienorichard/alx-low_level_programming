#include "main.h"
#include <stdio.h>

/**
*main - checks the code
*
*Return: 0
*/
int main(void)
{
	char s[] = "Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
