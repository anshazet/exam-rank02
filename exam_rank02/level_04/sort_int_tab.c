void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;             // Loop variable to iterate through the array
    int temp;                       // Temporary variable to hold a value during swapping

    while (i < (size - 1))          // Loop until all elements are in their correct positions
    {
        if (tab[i] > tab[i + 1])    // Compare the current element (tab[i]) with the next element (tab[i + 1])
        {
            temp = tab[i];          // If the current element is greater than the next one, swap them
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = -1;
        }
        i++;                        // After a swap, start the loop again from the beginning to recheck the elements
    }                               // The reason for setting i = -1 is that i will be incremented to 0 in the next iteration
}                                   // This way, we ensure that we recheck all elements from the beginning

#include <stdio.h>

int		main(void)
{
	int a[6] = {9, 7, 6, 4, 5, 10};
	int i = 0;
	int size = 6;

	sort_int_tab(a, size);
	while (i < size)
		printf("%d\n", a[i++]);
	return (0);
}

/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

/*
In summary, the sort_int_tab function implements the bubble sort algorithm to sort
an array of integers in ascending order. Here's a breakdown of the function's components:

The function takes two arguments: tab, which is a pointer to the integer array to be
sorted, and size, which is the number of elements in the array.

The function uses a loop variable i to iterate through the array and compare adjacent elements.

Inside the loop, the function compares the current element tab[i] with the next element tab[i + 1].

If the current element is greater than the next one (i.e., not in ascending order), the function
performs a swap between the two elements. The temporary variable temp is used to hold the value
during the swap.

After the swap, the function sets i = -1. This might seem unusual, but it's done intentionally
to ensure that the next iteration starts from the beginning of the array. When i is incremented
in the loop, it becomes 0, and the next iteration will check the first element again. This step
ensures that the sorting process continues until all elements are in their correct positions.

The function continues iterating through the array using the loop variable i.
Once the loop is complete (i.e., all elements have been checked and swapped if needed), the array
will be sorted in ascending order.

Bubble sort works by repeatedly swapping adjacent elements if they are in the wrong order until
the entire array is sorted. It is not the most efficient sorting algorithm, especially for large
arrays, but it's easy to understand and implement.
*/