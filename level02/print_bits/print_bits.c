#include <unistd.h>


// void    print_bits(unsigned char octet)
// {
//     int divide;
//     int i;
//     long arr[8] = {0};

//     i = 0;
//     divide = octet;
//     while (divide)
//     {
//         arr[i++] =  octet %= 2;
//         octet = divide /=2;
//     }
//     i = 7;
//     while (i >= 0)
//     {
//       char nb = arr[i] + '0';
//       write(1, &nb, 1);
//       i--;
//     }
// }



void    print_bits(unsigned char octet)
{
    int i;
    long arr[8] = {0};

    i = 0;
    while (i < 8)
    {
        arr[i++] =  octet % 2;
        octet /=2;
    }
    i = 7;
    while (i >= 0)
    {
      char nb = arr[i] + '0';
      write(1, &nb, 1);
      i--;
    }
}


// void    print_bits(unsigned char octet)
// {
//     int i = 8;
//     unsigned char bit;
//     while (i--)
//     {
//         bit = (octet >> i & 1) + '0';
//         write(1, &bit, 1);
//     }
    
// }

// void ft_bin(unsigned char nb)
// {
//     int a = 7;
//     while (a >= 0)
//     {
//         if(nb & (1 << a))
//             write(1, "1", 1);
//         else 
//             write(1, "0", 1);
//         // bit = nb >> a & 1 + '0';
//         // write(1, &bit, 1);
//         a--;
//     }
// }
// void	print_bits(unsigned char octet)
// {
// 	int				i;
// 	unsigned char	bit;

// 	i = 7;
// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// 	write(1, "\n", 1);
// }


int main()
{
    print_bits('A');
}

/*

#include <unistd.h>
#include <stdio.h>

void print_bits( char octet)
{
    char bit;
    int i;
    int arr[8];

    // Fill the array with bits using division and modulo
    i = 7; // Start from the least significant bit
    while (i >= 0)
    {
        arr[i] = octet % 2; // Extract the last bit (0 or 1)
        octet /= 2;         // Divide by 2 to move to the next bit
        i--;
    }

    // Print the bits stored in the array
    i = 0;
    while (i < 8)
    {
        bit = arr[i] + '0'; // Convert bit (0 or 1) to its ASCII representation
        write(1, &bit, 1);  // Print the bit
        i++;
    }

}

int main()
{
    print_bits(42); // Expected output: 00000010
    return 0;
}

*/