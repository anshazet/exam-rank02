#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        // Extract the current bit by right-shifting the octet and applying a bitwise AND operation with 1
        // Convert the bit value to a character ('0' or '1') by adding it to the ASCII value of '0'
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}


int main(void)
{
	print_bits(0);
	write(1, "\n", 1);
	print_bits(1);
	write(1, "\n", 1);
	print_bits(2);
	write(1, "\n", 1);
	print_bits(10);
	write(1, "\n", 1);
	print_bits(113);
	write(1, "\n", 1);
	print_bits(255);
	write(1, "\n", 1);
	return (0);
}
/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/

/*
In summary, the print_bits function is used to print the individual bits of an
unsigned character (octet) from the most significant bit (MSB) to the least
significant bit (LSB).

The function starts by declaring three variables:

i is an integer set to 8. It acts as a loop counter to iterate through the 8 bits
of the octet.
bit is an unsigned character that will store the value of each bit as a character.
The function then enters a while loop that executes 8 times since i is initially
set to 8 and decremented by one in each iteration.

Inside the loop, the current bit is extracted from the octet by performing a right
shift operation octet >> i followed by a bitwise AND operation with 1 (& 1). This
isolates the least significant bit (LSB) of the octet at each iteration.

The result of the bitwise AND operation is added to the character '0'. This converts
the bit value (0 or 1) to its corresponding character representation ('0' or '1').

The character representing the bit is then written to the standard output using the
write function. The write function takes three arguments: the file descriptor 1
(which corresponds to the standard output), the address of the bit character, and 
he size of the data to write (1 byte).

After all 8 bits have been processed and printed, the function completes, and the
program continues execution.

It's important to note that this function assumes a little-endian representation
of the octet, where the least significant bit (LSB) is printed first. If you want
to print the bits in big-endian order, you would need to modify the loop to iterate
in reverse order (from 0 to 7).

Also, please ensure that the write function is properly declared and included in
the code. It is typically found in the <unistd.h> header file, which provides access
to various system-level functions.
*/