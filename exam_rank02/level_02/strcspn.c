#include <string.h>
#include <unistd.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int  i = 0;         // Loop variable for traversing the 's' string
    int  j = 0;         // Loop variable for traversing the 'reject' string

    while (s[i])        // Loop through the 's' string until the null terminator ('\0') is encountered
    {
        j = 0;              // Reset 'j' to start traversing 'reject' from the beginning
        while (reject[j])   // Loop through the 'reject' string until the null terminator ('\0') is encountered
        {
            if (s[i] == reject[j])      // Check if the current character in 's' matches any character in 'reject'
                return (i);             // Return the index 'i' where the match was found
            j++;                        // Move to the next character in 'reject' for comparison
        }
        i++;                            // Move to the next character in 's' for the next iteration
    }
    i = 0;          // If no matching characters were found, set 'i' to 0 and traverse the 's' string until the null terminator ('\0') is encountered
    while (s[i])
        i++;
    return (i);    
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
   // Массив со строкой для поиска
   char str[] = "1234567890";

   // Набор символов, которые не должны входить в искомый сегмент
   char sym[] = "9876";

   // Определяем длину начального сегмента, не содержащего символы “9876”
   printf ("Длина сегмента: %ld\n", ft_strcspn(str, sym));

   return (0);
}
/* function calculates the leight (in bytes) of the initial segment of s
which consists entirely of bytes not in reject
function returns the number of bytes in the nitial segment of s which
are not in the string reject
*/
/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/
/*
Функция 'strcspn()' выполняет поиск любого символа из строки 'reject', который 
входит в строку 's', и возвращает количество символов до первого найденного 
символа входящего в строку 'reject'.

Поиск учитывает и завершающий нуль-символ, поэтому, если функция возвращает 
длину строки 's', это значит, что ни один из символов строки 'reject' не 
входит в состав начала строки 's'.


#include <stdio.h>
#include <string.h>

int		main(void)
{
   // Массив со строкой для поиска
   char str[] = "1234567890";

   // Набор символов, которые не должны входить в искомый сегмент
   char sym[] = "9876";

   // Определяем длину начального сегмента, не содержащего символы “9876”
   printf ("Длина сегмента: %ld\n", ft_strspn(str, sym));

   return (0);
}

Вывод в консоль:
Длина сегмента: 6
*/