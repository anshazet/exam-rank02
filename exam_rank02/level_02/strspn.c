#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;                  // Initialize a counter for iterating through 's'
    int     j = 0;                  // Initialize a counter for iterating through 'reject'

    while (s[i] != '\0')            // Loop through 's' until the null terminator '\0' is encountered
    {
		j = 0;
        while (reject[j] != '\0')   // Loop through 'reject' until the null terminator '\0' is encountered
        {
            if(s[i] == reject[j])   // Check if the current character in 's' matches any character in 'reject'
                return (i);         // If there's a match, return the index 'i'
            j++;                    // Move to the next character in 'reject'
        }
        i++;                        // Move to the next character in 's'
    }
    return (i);                     // If no matching characters are found, return the length of 's'
}


/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/

