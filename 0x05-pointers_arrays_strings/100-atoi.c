#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; /* Default positive sign */
    int i = 0;

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';
      
        if (result > (2147483647 - digit) / 10)
        {
            if (sign == 1)
            {
                return 2147483647;
            }
            else
            {
                return -2147483648;
            }
        }

        result = result * 10 + digit;
        i++;
    }
    return result * sign;
}
