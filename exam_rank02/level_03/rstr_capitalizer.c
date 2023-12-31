#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' \
                || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i++], 1);
    }    
}

int main (int ac, char **av)
{
    int i;

    if (ac == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            rstr_capitalizer(av[i]);
            write(1, "\n", 1);
            i += 1; // i++;
        }
    }
    return(0);
}
/*
#include <unistd.h>

void rstr_capitalizer(char *str)
{
    int i = 0;

    // Iterate through each character in the string until the null terminator is encountered
    while (str[i])
    {
        // Check if the current character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;  // Convert uppercase to lowercase by adding 32 to the ASCII value

        // Check if the current character is lowercase and the next character is a whitespace or end of string
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' ||
            str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;  // Convert lowercase to uppercase by subtracting 32 from the ASCII value

        // Write the current character to the standard output
        write(1, &str[i++], 1);
    }
}

int main(int ac, char **av)
{
    int i;

    // Check if there are no command-line arguments
    if (ac == 1)
        write(1, "\n", 1);  // Write a newline character to the standard output

    else
    {
        i = 1;
        // Iterate through each command-line argument
        while (i < ac)
        {
            // Process the command-line argument using the rstr_capitalizer function
            rstr_capitalizer(av[i]);

            // Write a newline character to the standard output
            write(1, "\n", 1);

            // Move to the next command-line argument
            i++;
        }
    }
    return (0);
}
*/


/*
Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>
*/