void    ft_print_alphabet()
{
    int i;
    char c;

    i = 0;
    c = 'a';
    while (i < 26)
    {
        ft_putchar(c);
        i++;
        c++;
    }
}
