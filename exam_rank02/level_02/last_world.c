#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char *lw;

    if (ac == 2)
    {
        while (av[1][i])
        {
            // Check if the current character is a space or a delimiter
            // and if the next character is not a space or delimiter
            if (av[1][i] <= ' ' && av[1][i + 1] > ' ')
                lw = &av[1][i + 1];                     // Set lw to the address of the first character of the last word
            i++;
        }
        i = 0;
        while (lw && lw[i] > ' ')
        {
            write(1, &lw[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}

/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/