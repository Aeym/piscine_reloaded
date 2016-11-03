void    ft_print_numbers()
{
    char c;
    int i;

    c = 48;
    i = 0;
    while (i < 10)
    {
        ft_putchar(c);
        i++;
        c++;
    }
}