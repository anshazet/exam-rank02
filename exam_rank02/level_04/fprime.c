#include <stdio.h>
#include <stdlib.h>

void fprime(int nb)
{
    int i = 2;

    if (nb == 1)
    {
        printf("1");
        return ;
    }
    while (nb >= i)
    {
        if (nb % i == 0)
        {
            printf("%d", i);
            if (nb != i)
                printf("*");
            nb /= i;
            i--;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");
    return(0);
}

/*
void fprime(int nb)
{
    int i = 2;          // Loop variable starting from 2, the first prime number

    if (nb == 1)
    {
        printf("1");
        return ;
    }
    while (nb >= i)             // Loop to find and print prime factors of 'nb'
    {
        if (nb % i == 0)        // Check if 'i' is a factor of 'nb'
        {
            printf("%d", i);    // If 'i' is a prime factor, print it
            if (nb != i)        // Check if 'i' is not the last prime factor of 'nb'
                printf("*");
            nb /= i;            // Reduce 'nb' by dividing it by 'i'
            i--;                // Decrement 'i' to check if it's a repeated factor
        }
        i++;                    // Move to the next number for checking
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");
    return(0);
}
*/
/*
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$

*/

/*
if (nb % i == 0)
        {
            printf("%d", i);
//            if (nb == i)
//                break;
            if (nb != i)
                printf("*");
            nb /= i;
            i--;
        }
*/