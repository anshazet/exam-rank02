#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return (0);
    while (*s1)
    {
        i = 0;
        while(s2[i])
        {
            if(*s1 == s2[i])
                return(char *) s1;
            i++;
        }
        s1++;
    }
    return(0);
}

/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/

/*
Функция strpbrk() возвращает указатель на символ в s, соответствующий одному 
из символов в наборе accept, или NULL, если такого символа нет в строке.  


int		main(void)
{
   // Массив со строкой для поиска
   char str[] = "1234567890";

   // Набор символов, которые не должны входить в искомый сегмент
   char sym[] = "9876";
  
   // Определяем длину начального сегмента, не содержащего символы “9876”
   printf ("\"%s\" - Кусок первой строки в котором впервые встречаются символы из второй строки.\n", ft_strpbrk(str,sym));

   return (0);
}


Вывод в консоль:

"67890" - Кусок первой строки в котором впервые встречаются символы из второй строки.

*/