#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[101];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 101; i++)
	{
		pass[i] = rand() % 67;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 67)
		{
			n = 2110- sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

