#include "main.h"
/**
 * myatoi - function to convert string to int. must be 0 or greater
 * @s: string to be used
 *
 * Return: s as int
 */
int myatoi(char *s)
{
	int i;
	long res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = res * 10 + (s[i] - '0');
	}
	return (s);
}

/**
 * reverse - function to reverse string
 * @s: string to be reversed
 *
 * Return: s
 */
char reverse(*s)
{
	int len = 0, i, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	return (s);
}

/**
 * infinite_add - function that adds two numbers.
 * @n1: first string of numbers
 * @n2: second string of numbers
 * @r:buffer used to store result
 * @size_r: size of buffer
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int position = 0;
	long int res1 = myatoi(n1);
	long int res2 = myatoi(n2);
	int sum = res1 + res2;
	int digit;
	char character;

	sum = num1 + num2;

	do {
		digit = sum % 10;
		character = digit + '0';
		r[position] = character;
		position++;
		sum /= 10;
	} while (sum > 0 && position < size_r - 1);
	r[position] = '\0';
	reverse(r);
	return (r);
}
