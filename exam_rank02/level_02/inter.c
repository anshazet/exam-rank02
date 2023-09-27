#include <unistd.h>

int inter(char *str, char c, int len)           // Function to check if a character 'c' exists in a string 'str' up to a certain length 'len'
{                                               // If 'len' is -1, the entire string will be searched
    int i = 0;

    while (str[i] && (i < len || len == -1))    // Loop until the end of the string 'str' is reached or until 'len' characters have been checked
        if (str[i++] == c)                      // If the current character 'str[i]' matches 'c', return 1 (true)
            return(1);
    return(0);                                  // If the character 'c' is not found, return 0 (false)
}

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 3)
    {
//        i = 0;
        while (av[1][i])
        {
            // Check if the current character 'av[1][i]' is not found in the substring of av[1] before index 'i'
            // AND check if the current character 'av[1][i]' is found in the entire second input string (av[2])
            // If both conditions are met, it means the character 'av[1][i]' is unique to the first string
            if(!inter(av[1], av[1][i], i) && inter(av[2], av[1][i], -1))
                write(1, &av[1][i], 1);         // Write the unique character 'av[1][i]' to the standard output
            i += 1;
        }
    }
    write(1, "\n", 1);
    return(0);
}

/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/