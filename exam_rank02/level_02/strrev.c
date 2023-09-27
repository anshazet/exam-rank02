char *ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	char temp;

	while (str[length])
        length++;
    while (++i < --length)
    {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
    }
	return (str);
}

#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str);

int main(int argc, char **argv)
{
	int i = 0;
    
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
/*
char    ft_strrev(char *str)
{
    int i;
    int l;
    char t;

    l = 0;
    while (str[l])
        l++;
    i = -1;
    while (++i < --l)
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
    }
    return(str);
}
*/
/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/