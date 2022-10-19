#include "main.h"
/**
 * print_char - prints a character
 * @a: character printed
 * Returns nothing
 */
void print_char(va_list c)
{
	char a = (char)va_arg(c, int);
	_putchar(a);
}

/**
 * print_string - prints a string
 * @str: string printed
 * Return: nothing
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);
	
	int n = strlen(str);

	if (str == NULL)
		str = "(null)";
	for(int i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * pritn_int - prints an integer
 * @a: integer printed
 * Return: nothing
 */
void print_int(va_list i)
{
	int a = va_arg(i, int);
	unsigned int num, d, counter;
	
	if(a < 0)
	{
		_putchar(45);
		num =- a;

	}
	else
	{
		num = a;
	}

	d = num;
	counter = 1;
	while(d > 9)
	{
		d /= 10;
		counter = counter * 10;
	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((num / counter) % 10) + 48);
	}
}
