#include "main.h"

/**
 * @n: n is an integer
 *
 * Description: returns the factorial of a given number.
 *
 * Return: an integer
 *
 */
int factorial(int n)
{
	if (n < 0)
		return -1
	if (n < 1)
		return 1
	return n * factorial(n - 1)
}
