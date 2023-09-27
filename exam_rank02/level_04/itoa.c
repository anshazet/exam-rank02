#include <stdlib.h>

char *ft_itoa(int nbr)
{
    char *str;
    char *t;
    char *u;

    if (!(str = (char *)malloc(16))) // Allocate memory for the string
        return (NULL);              // representation of the number (16 characters)
    t = str;                        // Assign the initial value of the pointer 't' to 'str'
    (nbr < 0 ? *t++ = '-' : 1);     // Check if the number is negative and add a '-' character if true
    if (nbr > 0)                    // Convert the number to its negative form for further processing
        nbr = -nbr;
    if (nbr <= -10)                 // Check if the number is less than or equal to -10
    {
        u = ft_itoa(-(nbr / 10)); // Recursive call to 'ft_itoa' to convert 
        while (*u)                // the absolute value of the number divided by 10
            *t++ = *u++;
    }
    *t = '0' - nbr % 10;            // Convert the last digit of the number to a character and assign it to the current position in 'str'
    *(t + 1) = '\0';                // Add a null terminator character to the next position to terminate the string
    return (str);
}

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

/*
In summary, the ft_itoa function converts an integer nbr into a string representation.
Here's a breakdown of the function's components:

The function begins by declaring three character pointers: str, t, and u. These pointers
will be used to manipulate the string during the conversion process.
The function dynamically allocates memory for the string str to hold the converted number.
It allocates 16 characters initially, assuming the maximum length required to store an integer.
If the memory allocation fails (malloc returns NULL), the function returns NULL to
indicate the error.
The pointer t is assigned the initial value of str, pointing to the first character of the string.
The function checks if the number nbr is negative (nbr < 0) and appends a '-' character to
the string if true. This is achieved by incrementing t to the next position in the string.
The function converts the number to its negative form (nbr = -nbr) to simplify further processing.
The function checks if the number is less than or equal to -10 (nbr <= -10).
If the condition is true, the function makes a recursive call to ft_itoa with the absolute value
of the number divided by 10 (-(nbr / 10)). This recursive call converts the remaining digits of
the number.
The result of the recursive call is stored in the pointer u.
The function iterates through the characters in u and copies them to the string str by incrementing
t and u respectively. This ensures that the digits are copied in the correct order.
After copying the digits from the recursive call, the function converts the last digit of the number
to a character and assigns it to the current position in str. This is achieved by subtracting the
last digit (nbr % 10) from the character '0' ('0' - nbr % 10).
Finally, the function adds a null terminator character ('\0') to the next position in str to terminate
the string.
The function returns the string representation of the number str.
It's important to note that the ft_itoa function uses dynamic memory allocation (malloc) to allocate
memory for the string. Therefore, it's necessary to free the allocated memory using free when it is
no longer needed to avoid memory leaks.
*/