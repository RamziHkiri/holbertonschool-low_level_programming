#include"main.h"
/**
 * _is_divise_n - verifie if i ^2 equal to n
 * @n:integer
 * @i:integer
 * Return: x^y
 */
int _is_divise_n(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n - 1)
		return (1);
	else
		return (_is_divise_n(n, i + 1));
}
/**
 * is_prime_number - test if a number n is prime or no
 * @n: integer
 * Return: return 1 if prime number and 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (_is_divise_n(n, i));
}
