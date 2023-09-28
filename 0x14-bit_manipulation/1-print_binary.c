#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @power: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int devsn, result;
	char flg;

	flg = 0;
	devsn = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (devsn != 0)
	{
		result = n & devsn;
		if (result == devsn)
		{
			flg = 1;
			_putchar('1');

		}
		else if (flg == 1 || devsn == 1)
		{
			_putchar('0');
		}
		devsn >>= 1;
	}
}
