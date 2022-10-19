#include "main.h"
/**
 * print_char - prints a character
 * @c: character printed
 * Return: 1 on success
 */
int print_char(va_list c)
{
	char a = (char)va_arg(c, int);

	_putchar(a);
	return (1);
}

/**
 * print_string - prints a string
 * @s: string printed
 * Return: i on success
 */
int print_string(va_list s)
{
	char *str = va_arg(s, char *);

	int i;
	int n = strlen(str);

	if (str == NULL)
		str = "(null)";
	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_int - prints an integer
 * @i: integer printed
 * Return: 0 on success
 */
int print_int(va_list i)
{
	int a = va_arg(i, int);
	unsigned int num, d, counter;

	if (a < 0)
	{
		_putchar(45);
		num = -a;

	}
	else
	{
		num = a;
	}

	d = num;
	counter = 1;
	while (d > 9)
	{
		d /= 10;
		counter = counter * 10;
	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((num / counter) % 10) + 48);
	}
	return (0);
}
/**
 * print_decimal - prints a decimal
 * @d: decimal printed
 * Return: 0 on success
 */
int print_decimal(va_list d)
{
	int a = va_arg(d, int);
	unsigned int num, n, counter;

	if (a < 0)
	{
		_putchar(45);
		num = -a;

	}
	else
	{
		num = a;
	}

	n = num;
	counter = 1;
	while (n > 9)
	{
		n /= 10;
		counter = counter * 10;
	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((num / counter) % 10) + 48);
	}
	return (0);
}
