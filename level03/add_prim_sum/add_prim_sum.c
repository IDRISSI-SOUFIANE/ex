#include <unistd.h>
#include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

long ft_atoi(char *s)
{
    int i;
    int sign;
    long res;

    sign = 1;
    res = 0;
    i = 0;
    while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        sign = -1;
        i++;
    }
    while (s[i])
	{
		res = res * 10 + (s[i] - '0');
		if ((sign == 1 && res > INT_MAX)
			|| (sign == -1 && res > ((long)INT_MAX + 1)))
			return (0);
		i++;
	}
    return (res * sign);
}

int    add_prim_sum(int nb)
{
    int i;
    int count ;

    i = 1;
    count = 0;
    if (nb == 1)
        return (0);
    if (nb == 2)
        return (1);
    while (nb >= i)
    {
        if (nb % i == 0)
            count++;
        i++;
    }
    if (count == 2)
        return (1);
    return (0);
}
void ft_putnbr(int nb)
{
    long n;

    n = nb;
    if (n == 2147483647)
        write(1,"2147483647\n", 11);
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    char digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int main(int ac, char **av)
{
    int nb;
    int res;

    if (ac != 2)
    {
        ft_putnbr(0);
        write(1,"\n", 1);
        return (0);
    }
    nb = ft_atoi(av[1]);
    if (nb <= 0)
        ft_putnbr(0);
    else
    {
        res = 0;
        while (nb)
        {
            if (add_prim_sum(nb))
                res += nb; 
            nb--;
        }
    }
    ft_putnbr(res);
    write(1,"\n", 1);
    return (0);
}


/*
#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res = 0;

	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	if (ac != 2)
		put_nbr(0);
	write(1, "\n", 1);
	return (0);
}

*/