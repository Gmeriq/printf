#include <>
/**
 * print_char - prints a character
 * @a: character printed
 * Returns nothing
 */
void print_char(char a)
{
	_putchar(a);
}

/**
 * print_string - prints a string
 * @a: string printed
 * Return: nothing
 */
void print_string(char *a)
{
	int n = strlen(a);
	for(int i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
}

/**
 * pritn_int - prints an integer
 * @a: integer printed
 * Return: nothing
 */
void print_int(int a)
{
	int d, counter;
	d = a;
	counter = 1;
	while(d > 9)
	{
		d /= 10;
		counter = counter * 10;
	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((a / counter) % 10) + 48);
	}
}
