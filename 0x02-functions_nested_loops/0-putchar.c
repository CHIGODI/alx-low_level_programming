/**
 * main - A program that prints _putchar using putchar function.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char str[] = "_puchar";
	int ch;

	for (ch = 0; str[ch] != '\0'; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
