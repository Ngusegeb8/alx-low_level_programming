#include "main.h"

/**
 * print_last_digit - prints the last digit of anumber
 * @n: input int n
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = (-1 * (n % 10));
_putchar(last_digit + '0');
return (last_digit);
}
else
{
last_digit = (n % 10);
_putchar(last_digit + '0');
return (last_digit);
}
}

