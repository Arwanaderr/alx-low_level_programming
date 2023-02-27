#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, y, z, b, digit;

	i = 0;
	d = 0;
	y = 0;
	z = 0;
	b = 0;
	digit = 0;

	while (s[z] != '\0')
		len++;

	while (i < len && b == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (b == 0)
		return (0);

	return (n);
}

