#include <unistd.h>

// void	ft_putnbr(int nbr)
// {
// 	char	c;

// 	if (nbr < 0)
// 	{
// 		write(1, "-", 1);
// 		nbr *= -1;
// 	}
// 	else if (nbr < 10)
// 	{
// 		c = nbr + '0';
// 		write(1, &c, 1);
// 	}
// 	else
// 	{
// 		ft_putnbr(nbr / 10);
// 		ft_putnbr(nbr % 10);
// 	}
// }

// int		main(int argc, const char *argv[])
// {
// 	ft_putnbr(argc - 1);
// 	write(1, "\n", 1);
// 	return (0);
// }



void    ft_putnbr(int n)
{
    long nb;

    nb = n;
    if (nb == 2147483647)
        write(1, "2147483647" ,11);
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    char c = ((nb % 10 )+ '0');
    write (1, &c, 1);
}

int main(int ac, char **av)
{
    (void)av;
    int i;

    if (ac >= 2)
    {    
        i = ac - 1;
        ft_putnbr(i);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
    // write(1, &i, 1);
}