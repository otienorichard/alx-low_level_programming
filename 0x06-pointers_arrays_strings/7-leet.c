#include "main.h"

/**
*leet - transform to leet
*@s: char array string type
*Return: s transformed
*/

char *leet(char *s)
{
	int i, ii;
	char s1[] = "aeotl";
	char S1[] = "AETOL";
	char s2[] = "1337";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (s[i] == s1[ii] || s1[i] == S1[ii])
			{
				s[i] = s2[ii];
				break;
			}
		}
	}
	return (s);
}
