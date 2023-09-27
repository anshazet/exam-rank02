#include <unistd.h>

void ft_write_number(int i)
{
    if (i > 9)
        ft_write_number(i / 10);
    write(1, &"0123456789"[i % 10], 1);
}

int main(int ac, char **av)
{ 
    (void)av;                   // The function takes two arguments, but the second one (av) is not used in this program.
                                // Therefore, we suppress the "unused parameter" warning with (void)av;
    ft_write_number(ac - 1);
    write(1, "\n", 1);
    return (0);
}

/*
void    ft_putnbr(int n)
{
    char digit;

    if (n >= 10)
        ft_putnbr (n / 10);
    digit = (n % 10) + '0';
    write(1, &digit, 1);
}
*/

/*
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/