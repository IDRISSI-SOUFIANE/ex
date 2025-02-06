#include <unistd.h>
#include <libc.h>


#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char reversed = 0;
	int i = 0;

	// Loop through all 8 bits
	while (i < 8)
	{
		// Extract the rightmost bit of `octet` and place it at the correct position in `reversed`
		reversed = (reversed << 1) | (octet & 1);

		// Shift `octet` right to process the next bit
		octet = octet >> 1;
		i++;
	}
	return reversed;
}
