#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void);
void    ft_print_numbers(void);
void    ft_is_negative(int);
void    ft_ft(int *nbr);

int main()
{
    int nb = 6;
    int *nbr;
    nbr = &nb;
    
    ft_print_alphabet();
    ft_print_numbers();
    ft_is_negative(-1);
    ft_is_negative(0);
    ft_is_negative(1);
    ft_ft(nbr);
    printf("%d", nb);
    return 0;
}