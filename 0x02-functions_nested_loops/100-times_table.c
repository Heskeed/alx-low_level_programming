Task 12.txt

Who has access

A

System properties

Type

Text

Size

677 bytes

Storage used

677 bytes

Location

0x02. C - Functions, nested loops

Owner

Antony Bahati

Modified

14 Sept 2022 by Antony Bahati

Opened

04:19 by me

Created

14 Sept 2022

No description

Viewers can download

#include "main.h"

/**
 *print_times_table - prints the  times table with
 *parameter
 *@n: parameter
 *Return: returns nothing
 */

void print_times_table(int n)

{
	int digit, mult, result;

	if (n <= 15 && n >= 0)
	{
	for (digit = 0; digit <= n; digit++)
	{
	_putchar('0');
	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');
	result = digit * mult;
	if (result <= 99)
	_putchar(' ');
	if (result <= 9)
	_putchar(' ');
	if (result >= 100)
	{
	_putchar((result / 100) + '0');
	_putchar((result / 10) % 10 + '0');
	}
	else if (result <= 99 && result >= 10)
	{
	_putchar((result / 10) + '0');
	}
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
