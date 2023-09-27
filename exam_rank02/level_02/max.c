int max(int *tab, unsigned int len)
{
    int max;         // Variable to store the maximum value
    int i = 0;          // Loop variable to traverse the array
    if (len == 0)
        return (0);
    
    max = tab[i];   // max = tab[i] // Initialize the result to the first element of the array
    while (i < len)      // Loop through the array to find the maximum value
    {
        if (max < tab[i])     // Check if the current element is greater than the current maximum (result)
        {
            max = tab[i];    // If the current element is greater, update the result to the new maximum
        }
        i++;
    }
    return (max);
}

#include <stdio.h>

int max(int *tab, unsigned int len);

int	main(void)
{
    printf ("%d\n" , max(NULL, 0));
	int nums01[] = {-2, -3, -776, -9};
	printf("%d\n", max(nums01, 4));
	int nums02[] = {-2, 101, 23};
	printf("%d\n", max(nums02, 3));
	int nums03[] = {-2, 101, 23, 200, -2000, 400000, 3999, 89, 2147483647};
	printf("%d\n", max(nums03, 9));
	return (0);
}


/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/