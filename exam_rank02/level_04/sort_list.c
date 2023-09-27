#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst; 
	while (lst->next != 0)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp; 
		}
		else
			lst = lst->next; 
	}
	lst = tmp; 
	return (lst);
}

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst;					// Store the original head of the list in a temporary variable
	while (lst->next != 0) 		// Iterate through the list until the next node is NULL
	{
								// Compare the current node's data with the next node's data using the
								// provided comparison function
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp; 			// Reset the list pointer to the original head
		}
		else
			lst = lst->next; 	// Move to the next node in the list
	}
	lst = tmp; 					// Reset the list pointer to the original head
	return (lst); 				// Return the sorted list
}

/*
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
*/

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
	// Declare variables
	int swap;
	t_list *tmp;

	// Assign the input list to a temporary variable
	tmp = lst;

	// Loop until the next node of the current node is NULL
	while (lst->next != 0)
	{
		// Compare the data of the current node and the next node using the provided comparison function
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			// Swap the data values of the current node and the next node
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			
			// Reset the list pointer to the original head node
			lst = tmp;
		}
		else
		{
			// Move to the next node in the list
			lst = lst->next;
		}
	}
	
	// Reset the list pointer to the original head node
	lst = tmp;

	// Return the sorted list
	return (lst);
}

/*
In summary, this function sort_list takes a linked list lst and a
comparison function cmp as input. It sorts the elements in the list
in ascending order based on the provided comparison function.

The function starts by declaring the necessary variables: an integer
swap and a pointer to a t_list structure tmp. tmp is used to store
the initial head node of the list.

The function then enters a loop that continues until the next node
of the current node (lst->next) is NULL. This loop iterates through
the list, comparing adjacent nodes and swapping their data values
if necessary.

Within the loop, the comparison function cmp is called to compare
the data values of the current node and the next node. The function
pointer cmp is dereferenced and called using (*cmp)(lst->data, lst->next->data).
If the comparison result is equal to 0, indicating that the current
node's data is greater than or equal to the next node's data, a swap
is performed.

The swap operation involves temporarily storing the current node's
data in the swap variable, then updating the current node's data
with the next node's data, and finally assigning the stored value
from swap to the next node's data.

After the swap, the list pointer lst is reset to the original head
node tmp. This ensures that the next iteration of the loop starts
from the beginning of the list.

If the comparison result is not equal to 0, indicating that the
current node's data is already in the correct order, the list
pointer lst is simply moved to the next node in the list.

Once the loop completes, the list pointer lst is reset to the
original head node tmp to ensure that the function returns the
sorted list from the beginning.

Finally, the function returns the sorted list.

It's important to note that the implementation assumes the
existence of a t_list structure, which likely represents a node
in the linked list. The structure would typically contain a data
field and a pointer to the next node in the list. Additionally,
the comparison function cmp is expected to return an integer
value indicating the relationship between the two input values
(e.g., -1 for less than, 0 for equal, 1 for greater than).

Remember to adjust the comments and variable types based on the
 actual implementation details.
*/