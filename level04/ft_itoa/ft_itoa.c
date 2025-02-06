#include <stdio.h>
#include <stdlib.h>

char    *fill(char *arr, int nb, int i)
{
    while (arr[i] != '-' && i >= 0)
    {
        arr[i] = (nb % 10) + '0';
        nb /= 10;
        i--;
    }
    return (arr);
}

int ft_len_nb(int nb)
{
    int count;

    count = 0;
    while (nb)
    {
        nb /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int nb)
{
    int i;
    int len_nb;
    char *arr;

    if (nb == 0)
        return ("0");
    if (nb >= 0)
        len_nb = ft_len_nb(nb);
    else
        len_nb = ft_len_nb(nb) + 1;
    arr = malloc(len_nb + 1 * sizeof(char));
    if (!arr)
        return (NULL);
    arr[len_nb] = '\0';
    if (nb < 0)
    {
        arr[0] = '-';
        nb = -nb;
    }
    i = len_nb - 1;
    return (fill(arr, nb, i));
}


int main()
{
    printf ("%s", ft_itoa(-0));
}