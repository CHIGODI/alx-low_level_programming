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

    while (s[i])
    {
        if (s[i] == '-')
            sign = -sign;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (result == 0)
                result = s[i] - '0';
            else
                result = result * 10 + (s[i] - '0');
        }
        else if (result != 0)
            break;
        i++;
    }

    return (result * sign);
}
