#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int nbr1;
    int nbr2;

    if (ac == 3)
    {
        if ((nbr1 = atoi(av[1])) > 0 && (nbr2 = atoi(av[2])) > 0)
        {
            while (nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1 -= nbr2;
                else
                    nbr2 -= nbr1;
            }
            printf("%d", nbr1);
        }
    }
    printf("\n");
    return(0);
}

/*
void    ft_pgcd(int a, int b)
{
    int i = 1;
    int gcd = 0;

    while (i < a && i < b)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
        i++;
    }
    printf("%d", gcd);
}

int main (int ac, char **av)
{
    if (ac == 3)
        ft_pgcd(atoi(av[1]), atoi(av[2]));
    printf("\n");
    return(0);
}
*/
/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

/*
In summary, this program calculates the greatest common divisor (GCD) of two positive integers provided as command-line arguments. It uses the Euclidean algorithm to find the GCD and then prints the result. Here's a breakdown of the program's components:

The program includes the necessary headers, <stdio.h> for input/output functions and <stdlib.h> for atoi, which converts strings to integers.
The program's main function is defined, taking two arguments: ac (number of command-line arguments) and av (array of strings representing the arguments).
The program declares two integer variables, nbr1 and nbr2, which will store the two integers provided as command-line arguments.
The program checks if it is called with exactly three arguments (ac == 3), which includes the program name, nbr1, and nbr2.
Inside the if block, the program uses atoi to convert the command-line arguments av[1] and av[2] to integers and stores them in nbr1 and nbr2, respectively. It also checks if both nbr1 and nbr2 are greater than 0. If any of the input arguments is not a positive integer, the program will skip the GCD calculation and print a newline character.
The program then uses the Euclidean algorithm to find the GCD of nbr1 and nbr2. The algorithm involves repeatedly subtracting the smaller number from the larger one until both numbers become equal (the GCD). The GCD is stored in either nbr1 or nbr2, and in this case, it's stored in nbr1.
After finding the GCD, the program prints it to the standard output using printf("%d", nbr1);.
If the program is called with fewer than three arguments or the provided arguments are not positive integers, it will skip the GCD calculation and directly print a newline character (\n) to the standard output.
Finally, the program returns 0 to indicate successful execution.
For example, running the program with the command ./program_name 12 18 will output 6, which is the GCD of 12 and 18.
*/