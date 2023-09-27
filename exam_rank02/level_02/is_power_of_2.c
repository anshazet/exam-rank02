int is_power_of_2(unsigned int  n)
{
    if (n == 0)
        return(0);
    while (n % 2 == 0)
        n = n / 2;
    return ((n == 1) ? 1 : 0); //// Check if n is equal to 1 and return 1
}

/* ne marche pas
int is_power_of_2(unsigned int n)
{
	int number = 1;
	
	while(number <= n)
	{
		if (number == n)
		{
			return 1;
		}
		number = number * 2;
	}
	return 0;
}
*/

/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/

/*
In summary, this is_power_of_2 function determines whether an unsigned integer n
is a power of 2 or not.

The function begins by checking if n is equal to 0. If it is, the function
immediately returns 0, indicating that 0 is not a power of 2.

If n is not equal to 0, the function enters a while loop. This loop continues as
long as n is divisible by 2 (i.e., n modulo 2 is equal to 0). In each iteration,
n is divided by 2.

After the loop terminates, the function checks if n is equal to 1. If it is, the
function returns 1, indicating that n is a power of 2. If n is not equal to 1,
the function returns 0, indicating that n is not a power of 2.

The reason this function works is that powers of 2 have a unique property: 
hey are always divisible by 2 without a remainder. By repeatedly dividing n by 2
until it is no longer divisible by 2, the function effectively eliminates all
factors of 2 from n. If the resulting value of n is 1, it means that the original
value of n was a power of 2. If the resulting value of n is not 1, it means that
the original value of n had factors other than 2, indicating that it is not a
power of 2.
*/