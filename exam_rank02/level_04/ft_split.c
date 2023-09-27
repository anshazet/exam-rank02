#include <stdlib.h>
# define WD_NUM 1000
# define WD_LEN 1000

char    **ft_split(char *str)
{
    int i = 0;
    int i2 = 0;
    int i3;
    char **tab;

    tab = (char**)malloc(sizeof(**tab) *WD_NUM);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] > 32)
        {
            i3 = 0;
            tab[i2] = (char*)malloc(sizeof(char) * WD_LEN);
            while (str[i] > 32)
            {
                tab[i2][i3] = str[i];
                i++;
                i3++;
            }
            tab[i2][i3] = '\0';
            i2++;
        }
        else
            i++;
    }
    tab[i2] = 0;
    return (tab);
}

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdio.h>

int main ()
{
    printf("ft_split: %d\n", ft_split("qqqq qqqq"));
    printf("ft_split: %d\n", ft_split("qqqq qqqq 1234"));
    printf("ft_split: %d\n", ft_split("ds23 qqqq"));
    printf("ft_split: %d\n", ft_split("123 456 789"));
    printf("ft_split: %d\n", ft_split("    abc    gfd  -35"));
    printf("ft_split: %d\n", ft_split("aaa bbb ccc ddddd"));
    printf("ft_split: %d\n", ft_split("----    +++++ 0000"));
    printf("ft_split: %d\n", ft_split(""));
    printf("ft_split: %d\n", ft_split("       "));


    
    printf("ft_split: %d\n", ft_split("12344bgadaga"));
}
