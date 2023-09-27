#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}

/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

int *ft_rrange(int start, int end)
{
	// Declare variables
	int *range;
	int i = 0;
	int n = end - start + 1;

	// Base case: if start is greater than end, swap the arguments and call the function recursively
	if (start > end)
		return (ft_rrange(end, start));
	
	// Allocate memory for the range array
	range = (int *)malloc(sizeof(int) * n);

	// Check if memory allocation was successful
	if (range)
	{
		// Fill the range array in reverse order
		while (i < n)
		{
			range[i] = end;
			end--;
			i++;
		}
	}

	// Return the range array
	return (range);
}

/*
In summary, this function ft_rrange takes two integers, start and end,
and returns an array of integers containing a range of values from end to start.
The values are filled in reverse order.

The function starts by declaring the necessary variables: a pointer to an
integer (range), and two integer variables i and n. i is used as a counter
in the loop, and n represents the size of the range array.

Next, there's a base case check to handle the scenario where start is greater
than end. In such cases, the arguments are swapped, and the function is called 
ecursively with the updated values of end and start. This ensures that the
function can handle both ascending and descending ranges.

If the base case condition is not met, memory is allocated for the range array
using malloc(). The size of the array is determined by multiplying the number
of elements (n) by the size of each element (the sizeof(int)).

After successful memory allocation (range != NULL), the while loop is executed.
It fills the range array with values starting from end and decrementing end
until i reaches the value of n. This loop populates the array in reverse order. 
*/
