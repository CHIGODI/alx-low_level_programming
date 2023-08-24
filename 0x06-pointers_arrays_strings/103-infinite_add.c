#include "main.h"
/**
 * myatoi - function to convert string to int. must be 0 or greater
 * @s: string to be used
 *
 * Return: converted integer
 */
int myatoi(char *s)
{
    int i;
    int res = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        res = res * 10 + (s[i] - '0');
    }
    return res;
}

/**
 * reverse - function to reverse string
 * @s: string to be reversed
 *
 * Return: reversed string
 */
char *reverse(char *s)
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
    return s;
}

/**
 * infinite_add - function that adds two numbers.
 * @n1: first string of numbers
 * @n2: second string of numbers
 * @r: buffer used to store result
 * @size_r: size of buffer
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0;
    int carry = 0, sum = 0;
    int index = 0;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    len1--;
    len2--;

    while (len1 >= 0 || len2 >= 0 || carry)
    {
        int num1 = (len1 >= 0) ? (n1[len1] - '0') : 0;
        int num2 = (len2 >= 0) ? (n2[len2] - '0') : 0;

        sum = num1 + num2 + carry;
        carry = sum / 10;
        r[index++] = (sum % 10) + '0';

        if (index >= size_r - 1)
            return 0;

        if (len1 >= 0)
            len1--;
        if (len2 >= 0)
            len2--;
    }

    r[index] = '\0';
    reverse(r); // Assuming you have a working reverse function

    return r;
}

