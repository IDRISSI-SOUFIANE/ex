#include <unistd.h>
#include <stdio.h>

/*size_t  ft_strlen(char *s1)
{
    size_t i;

    i = 0;
    while(s1[i])
        i++;
    return (i);
}

void    wdmatch(char *s1, char *s2)
{
    int i;
    int j;
    int len;

    i = 0;
    j = 0;
    len = 0;
    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                len++;
                break;
            }
            j++;
        }
        i++;
    }

    i = 0;
    j = 0;
    if (ft_strlen(s1) == len)
    {
        while (s1[i])
        {
            while (s2[j])
            {
                if (s1[i] == s2[j])
                {
                    write(1, &s1[i],1);
                    break;
                }
                j++;
            }
            i++;
        }   
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        wdmatch(av[1], av[2]);
    write(1, "\n", 1);
}
*/

void	ft_putstr(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		main(int argc, char const *argv[])
{
	int		i;
	int		j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

/* second logic

int main(int ac, char **av)
{
    int i;
    int j;
    
    if (ac == 3)
    {
        j = 0;
        i = 0;
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (av[1][i] == '\0')
        {
            i = 0;
            while(av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}

*/