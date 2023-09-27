unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n;                 //variable to store the current number being checked

    if (a == 0 || b == 0)
        return (0);
    if (a > b)                      // Determine the larger of the two numbers
        n = a;
    else
        n = b;
    while (1)                       // loop that continues indefinitely (while (1))
    {
        if (n % a == 0 && n % b == 0) // Check if the current number (n) is divisible by both 'a' and 'b'
            return (n);
        ++n;
    }
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	return (0);
}
/*
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);
*/

/*
In summary, the lcm function calculates the least common multiple (LCM) of two
unsigned integers a and b. Here's a breakdown of the function's components:

The function takes two unsigned integer arguments: a and b.
It declares an unsigned integer variable n to store the current number being checked.
The function first checks if either a or b is zero. If either of them is zero,
it means that one of the numbers is a multiple of zero, and the LCM cannot be
calculated. In such cases, the function returns 0.
If both a and b are non-zero, the function determines the larger of the two numbers
by comparing them. If a is greater than b, the larger number is assigned to n; otherwise,
b is assigned to n.
The function then enters a while loop that continues indefinitely (while (1)). This loop
iterates through consecutive numbers starting from n and checks if each number is
divisible by both a and b.
Inside the loop:
The if statement checks if the current number (n) is divisible by both a and b without
leaving a remainder. If this condition is true, it means that n is a common multiple of
a and b, and it is the least common multiple (LCM). In such cases, the function returns n.
If the condition is not met, the loop continues to the next iteration by incrementing n by 1.
The function uses a straightforward approach to find the LCM by iterating through numbers
starting from the larger of the two input numbers until a common multiple is found.
This implementation works for small input values, but it may not be efficient for large
inputs. For larger numbers, more optimized algorithms, such as the Euclidean algorithm or
prime factorization, can be used to find the LCM.
*/