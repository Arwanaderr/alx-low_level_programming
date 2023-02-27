#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int strings = 0;
	int y;

	while (*s != '\0')
	{
		strings++;
		s++;
	}
	s--;
	for (y = strings; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

