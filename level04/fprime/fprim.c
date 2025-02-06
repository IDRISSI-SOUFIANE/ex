#include <stdio.h>
#include <stdlib.h>

// int main(int ac, char **av)
// {
//     int i;
//     int nb;

//     if (ac == 2)
//     {
//         i = 1;
//         nb = atoi(av[1]);
//         if (nb == 1)
//             printf("1");
//         while (nb >= ++i)
//         {
//             if (nb % i == 0)
//             {
//                 printf("%d", i);
//                 if (nb == i)
//                     break ;
//                 printf("*");
//                 nb /= i;
//                 i = 1;
//             }
//         }
//     }
//     printf("\n");
//     return (0);
// }



int main(int ac, char **av)
{
    int i;
    int nb;

    if (ac == 2)
    {
        i = 1;
        nb = atoi(av[1]);
        if (nb == 1)
            printf("1");
        while (nb >= ++i)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (nb == i)
                    break;
                printf("*");
                nb = nb / i;
                i = 1;
            }
        }
    }
    printf("\n");
}