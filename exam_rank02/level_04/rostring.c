#include <unistd.h>

void	rostring(char *str)
{
	int		i;
	int		j;

	if (*str)				// (!= '\0') if the string is not empty 
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\t') 			// Skip leading spaces and tabs in the string
			i++;
		j = i;												// Store the starting position of the first word in 'k'
		while (str[i] && str[i] != ' ' && str[i] != '\t') 	// Find the end of the first word
			i++;
		while (str[i]) 										// Loop to process and print the rotated words
		{
			if (str[i] && (str[i] != ' ' && str[i] != '\t') \
				&& (str[i - 1] == ' ' || str[i - 1] == '\t'))	// Check if the current character is the start of a new word
			{
				while (str[i] && (str[i] != ' ' && str[i] != '\t'))		// Print the word followed by a space
					write(1, &str[i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (str[j] && (str[j] != ' ' && str[j] != '\t'))			// Print the first word that was stored in 'j' (last word in the original string)
			write(1, &str[j++], 1);
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}

/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

/*
The program includes the <unistd.h> header, which provides access to the write function
used to write data to the standard output.

The rostring function is defined, which rotates the words in a given string and prints
the result.
It takes a character pointer str as an input.

The function starts by checking if the input string is not empty (i.e., the first
character is not the null terminator '\0').

The function initializes two loop variables, i and k, to 0. The variable i is used to
traverse the string, while k stores the starting position of the first word.

The function enters a loop to skip any leading spaces or tabs in the string.

The function then finds the end of the first word (a word is delimited by spaces or tabs)
and stores the starting position of the next word in k.

The function enters another loop to process and print the rotated words.

Inside the loop, the function checks if the current character is the start of a new word
(i.e., it is not a space or tab, and the previous character was a space or tab). If so,
it prints the word followed by a space.

The function continues to traverse the string using the loop variable i.

After processing all words except the first one, the function prints the first word that
was stored in k (last word in the original string) using the loop variable k.

In the main function, the program checks if it is called with more than one argument
(program name + input string).

If the program is called with more than one argument, it calls the rostring function
with the second argument (input string).
After calling the function (or if there are no arguments), the program prints a newline
character ("\n") to the standard output.

The program returns 0 to indicate successful execution.

*/