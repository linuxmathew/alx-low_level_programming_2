#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The input value.
 *
 * Return: None
*/

void print_number(int n)
{
if (n < 0){
_putchar('-');
n = -n;
}

if (n < 10)
{
_putchar('0' + n);
}
else if (n >= 10 && n < 100)
{
_putchar('0'+ n / 10);
_putchar('0' + n % 10);
}
else
{
_putchar('0' + n / 100);
print_number(n % 100);
}
}
