#include <unistd.h>
#include <stdio.h>

long    ft_atoi(char *s)
{
    int i;
    int sign;
    long res;

    i = 0;
    sign = 1;
    res = 0;
    while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
        i++;
    if (s[i] == '-' || s[i] == '+')
        if (s[i++] == '-')
            sign = -1;
    while (s[i])
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return (res * sign);
}

void    do_op(char *s1, char *c, char *s2)
{
    // if ()
    int n1 = ft_atoi(s1);
    int n2 = ft_atoi(s2);
    if (c[0] == '+')
        printf("%d", n1 + n2);
    else if (c[0] == '-')
        printf("%d", n1 - n2);
    else if (c[0] == '*')
        printf("%d", n1 * n2);
    else if (c[0] == '/')
        printf("%d", n1 / n2);
    else if (c[0] == '%')
        printf("%d", n1 % n2);
}

int main(int ac, char **av)
{
    if (ac == 4)
        do_op(av[1], av[2], av[3]);
    printf("\n");
    // write(1, "\n", 1);
}