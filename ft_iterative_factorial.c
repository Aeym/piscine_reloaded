int     ft_iterative_factorial(int nb)
{
    int i;
    
    i = 1;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    else
    {
        while (nb > 1)
        {
            i *= nb;
            nb--;
        }
        return (i);
    }
}