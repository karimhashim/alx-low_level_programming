#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == 'a' || n[i] == 'A')
		{
			n[i] = 4;
		} if (n[i] == 'e' || n[i] == 'E')
                {
                        n[i] = 3;
                } if (n[i] == 'o' || n[i] == 'O')
                {
                        n[i] = 0;
                } if (n[i] == 't' || n[i] == 'T')
                {
                        n[i] = 7;
                }else if (n[i] == 'l' || n[i] == 'L')
                {
                        n[i] = 1;
                }
	}
	return (n);
}

