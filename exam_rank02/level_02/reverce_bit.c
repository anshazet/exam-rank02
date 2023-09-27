unsigned char   reverce_bits(unsigned char octet)
{
    int i = 8;                // Number of bits in an unsigned char (8 bits)
    unsigned char   res = 0;  // Variable to store the reversed bits

    while (i > 0)
    {
        // Multiply the result by 2 and add the least significant bit (LSB) of the input octet
        // The least significant bit is obtained by using the modulo operator (% 2)
        res = res * 2 + (octet % 2);
        octet = octet / 2;      // Right shift the input octet by 1 to remove the least significant bit
        i--;
    }
    return (res);
}


#include <stdio.h>

int     main()
{
	printf("%d\n", reverce_bits(1));
	return (0);
}
/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
*/

/*
The function reverse_bits takes an unsigned 8-bit integer octet as input.

The variable i is initialized to 8, representing the number of bits in an unsigned char (8 bits).

The variable res is initialized to 0. It will store the reversed bits of the input octet.

The function uses a while loop to reverse the bits of the input octet:
a. The loop continues until all 8 bits of the input octet have been processed.
b. In each iteration, the least significant bit (LSB) of the input octet is obtained using
the modulo operator % 2.
c. The result res is then multiplied by 2, effectively shifting the existing bits to the left,
and the LSB is added to it.
d. The input octet is right-shifted by 1 (equivalent to dividing by 2), removing the least
significant bit for the next iteration.
e. The bit counter i is decremented to keep track of the number of processed bits.

After processing all 8 bits, the function returns the result res, which now contains the input
octet with its bits reversed.
*/