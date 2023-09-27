#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *rev_print(char *str)
{
    int j = ft_strlen(str) - 1;

    while (j >= 0)
    {
        write(1, &str[j], 1);
        j--;
    }
    return (str);
}


#include <stdio.h>

int main(void)
{
    rev_print("rainbow dash");
    write(1, "\n", 1);
    rev_print("Ponys are awesomes");
    write(1, "\n", 1);
    rev_print("");
    write(1, "\n", 1);
    return(0);
}