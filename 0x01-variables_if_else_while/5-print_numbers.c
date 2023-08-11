#include <stdio.h>
/**
 * main - A programm that print single base 10 numbers followed by new line.
 *
 * Return: Always 0 (Successs)
 *
 */
int main(void)
{
	int base_10_num;

	for (base_10_num = 0; base_10_num <= 9; base_10_num++)
	{
		printf("%d", base_10_num);
	}
	printf("\n");
	return (0);
}
