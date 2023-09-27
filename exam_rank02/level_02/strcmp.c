int ft_strcmp(char *s1, char *s2)   //function compare 2 str
{
    while (*s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return(*s1 - *s2);
}

/*
int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && (s1[i] == s2[i]))
    {
        i++;
    }
    return(s1[i] - s2[i]);
}
*/

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
        printf("%d\n", strcmp(argv[1], argv[2]));
	return (0);
}

/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/