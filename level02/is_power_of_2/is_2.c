#include <unistd.h>
#include <stdio.h>

int    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return (1);
    return (0);
}



int main()
{
    int nb = 12;

    if (is_power_of_2(nb))
        printf("yes");
    else
        printf("no");

}



// int		main()
// {
//     printf("%d\n", 3 % 2 == 0 ? 1 : -1);
// }
