int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13)) // Skip leading whitespace characters
        str++;
    if (*str == '-')                        // Check for a sign character
        sign = -1;
    if (*str == '-' || *str == '+')         // Move past the sign character
        str++;
    while (*str >= '0' && *str <= '9')      // Convert the string to an integer
    {
        result = result * 10 + *str - '0'; // Update the result by multiplying 
        str++;                             //it by 10 and adding the current digit
    }
    return(sign * result);                  // Apply the sign to the result and return
}
/*
int ft_atoi(char *str)
{
    int i = 0;
    int n = 1;
    int result = 0;

    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        n = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * n);
}
*/

#include <stdio.h>
#include <stdlib.h>

int             ft_atoi(char *str);

int main()
{
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi("5"));
	printf("atoi: %d\n", atoi("5"));

	return 0;
}

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

/*
In summary, this ft_atoi function is an implementation of the atoi (ASCII to integer)
function, which converts a string representation of an integer to an actual integer
value.

The function starts by declaring and initializing two variables: result and sign.
result will store the final converted integer value, and sign will hold the sign
of the number (1 for positive, -1 for negative).

The function then enters a while loop that skips any leading whitespace characters.
It checks if the current character is either a space character or falls within the
range of ASCII characters 9 to 13, which correspond to control characters like tabs
and newlines.

Next, it checks if the first non-whitespace character is a sign character ('-').
If it is, the sign variable is updated to -1 to indicate a negative number.

After handling the sign character (if present), the function moves past the sign
character ('-' or '+') to continue processing the remaining digits.

Inside the subsequent while loop, the function iterates through the string while
the current character is a digit (between '0' and '9'). It converts each digit to
its corresponding integer value and adds it to the result. The conversion is done
by multiplying the result by 10 (to shift the previous digits to the left) and
adding the integer value of the current digit obtained by subtracting the ASCII
value of '0' from the character value.

Finally, the function multiplies the result by the sign variable to apply the
appropriate sign and returns the final result.

It's important to note that this implementation assumes that the input string
str is a valid representation of an integer. If the string contains non-digit
characters or exceeds the range of representable integers, the behavior of the
function may be undefined or produce incorrect results.
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("ft_atoi: %d\n", ft_atoi(""));
    printf("ft_atoi: %d\n", ft_atoi("0"));
    printf("ft_atoi: %d\n", ft_atoi("-0"));
    printf("ft_atoi: %d\n", ft_atoi("+0"));
    printf("ft_atoi: %d\n", ft_atoi("1"));
    printf("ft_atoi: %d\n", ft_atoi("-1"));
    printf("ft_atoi: %d\n", ft_atoi("123"));
    printf("ft_atoi: %d\n", ft_atoi("12345"));


    printf("ft_atoi: %d\n", ft_atoi("     1234"));
    printf("ft_atoi: %d\n", ft_atoi("    -1234"));
    printf("ft_atoi: %d\n", ft_atoi("-111111111"));
    printf("ft_atoi: %d\n", ft_atoi("123    "));
    printf("ft_atoi: %d\n", ft_atoi("123++"));
    printf("ft_atoi: %d\n", ft_atoi("+123 dasdasasasf"));
    
    
    printf("ft_atoi: %d\n", ft_atoi("     "));
    printf("ft_atoi: %d\n", ft_atoi("jljasdalskas"));




    printf("ft_atoi: %d\n", ft_atoi("5522"));
    printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
    printf("ft_atoi: %d\n", ft_atoi("2147483647"));
    printf("ft_atoi: %d\n", ft_atoi("-2147483649"));
    printf("ft_atoi: %d\n", ft_atoi("2147483648"));
    printf("ft_atoi: %d\n", ft_atoi("NULL"));


    printf("ft_atoi: %d\n", ft_atoi("  ++1234"));
    printf("ft_atoi: %d\n", ft_atoi("  ++1234"));
    printf("ft_atoi: %d\n", ft_atoi("  ++1234"));
    printf("ft_atoi: %d\n", ft_atoi("  ++1234"));

    printf("ft_atoi: %d\n", ft_atoi("  +-1234"));
    printf("ft_atoi: %d\n", ft_atoi("  -+1234"));
    printf("ft_atoi: %d\n", ft_atoi("  --1234"));
    printf("ft_atoi: %d\n", ft_atoi("  +12-34"));
    printf("ft_atoi: %d\n", ft_atoi("  -12-34"));
    printf("ft_atoi: %d\n", ft_atoi(" - 1234"));
    printf("ft_atoi: %d\n", ft_atoi("  -  + 1234"));
    printf("ft_atoi: %d\n", ft_atoi(" - 1234"));
    printf("ft_atoi: %d\n", ft_atoi("  a  + 1234"));
    printf("ft_atoi: %d\n", ft_atoi("    +a1234"));
    printf("ft_atoi: %d\n", ft_atoi("    + a 1234"));
    printf("ft_atoi: %d\n", ft_atoi("    + a1234"));
    printf("ft_atoi: %d\n", ft_atoi("  1234a"));
    printf("ft_atoi: %d\n", ft_atoi("  1234-"));
    printf("ft_atoi: %d\n", ft_atoi("  12a34"));
    printf("ft_atoi: %d\n", ft_atoi("  1234-"));
    printf("ft_atoi: %d\n", ft_atoi(" "));
    printf("ft_atoi: %d\n", ft_atoi(""));
    printf("ft_atoi: %d\n", ft_atoi("  -a"));
    printf("ft_atoi: %d\n", ft_atoi("  a"));
    printf("ft_atoi: %d\n", ft_atoi("  -1 a"));

}
*/