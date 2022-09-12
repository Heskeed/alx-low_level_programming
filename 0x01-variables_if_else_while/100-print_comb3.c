#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (success)
 */

int main(void)

{
	int n, m;

	for (n = 38; n <= 47; n++)
	{
		for (m = 38; m <= 47; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 47 || m != 47)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
