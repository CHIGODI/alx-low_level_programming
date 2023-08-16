void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            int times = i * j;
            int first = times / 10;
            int last = times % 10;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            _putchar(first + '0');
            _putchar(last + '0');

            if (j == 9)
            {
                _putchar('\n');
            }
        }
    }
}
