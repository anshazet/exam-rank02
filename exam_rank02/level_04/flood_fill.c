typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void    fill(char **tab, t_point size, t_point cur, char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
        || tab[cur.y][cur.x] != to_fill)
        return;

        tab[cur.y][cur.x] = 'F';
        fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
        fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
        fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
        fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void    flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}

/*
.h
#ifndef T_POINT_FLOOD_FILL
# define T_POINT_FLOOD_FILL

typedef struct s_point
{
    int x;
    int y;
}       t_point;

#endif
*/

/*
Assignment name  : flood_fill
Expected files   : *.c, *.h
Allowed functions: -
--------------------------------------------------------------------------------

Write a function that takes a char ** as a 2-dimensional array of char, a
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone
by replacing characters inside with the character 'F'. A zone is an group of
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.

The flood_fill function will be prototyped like this:
  void  flood_fill(char **tab, t_point size, t_point begin);

The t_point structure is prototyped like this:

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

Example:

$> cat test.c
#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$>
*/
/*
This code defines a function named fill that takes the following
arguments:

tab: A pointer to a pointer to characters (char**), representing
a two-dimensional array.
size: An instance of the t_point structure, representing the size
of the array.
cur: An instance of the t_point structure, representing the current
position within the array.
to_fill: A character representing the value to be replaced.
This function is used for flood filling an area in a two-dimensional
array. It recursively fills neighboring cells with a specific character
until the boundary is reached or a different character is encountered.

The function begins with an if statement that checks several conditions:

If the cur point is out of bounds (either x or y is less than 0 or
greater than or equal to the size of the array).
If the current cell in the tab array does not match the to_fill character.
If any of these conditions are met, the function returns, and the recursion
stops for the current path.

If the conditions are not met, the current cell is set to the character 'F',
indicating it has been filled. Then, the fill function is recursively
called four times to fill the neighboring cells:

fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill): Fills the cell
to the left of the current cell.
fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill): Fills the cell
to the right of the current cell.
fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill): Fills the cell
above the current cell.
fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill): Fills the cell
below the current cell.
These recursive calls continue the flood fill algorithm until all
adjacent cells that match the to_fill character have been filled.
*/