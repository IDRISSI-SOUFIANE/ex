#include <unistd.h>

// int  ft_strlen(char *s)
// {
//     int i;

//     i = 0;
//     while (s[i])
//         i++;
//     return (i);
// }


// void    s_and_r(char *s, char *av1, char *av2)
// {
//     int i;

//     i = 0;
//     if ((ft_strlen(&av1[1]) > 1) || (ft_strlen(&av2[2]) > 1))
//         return ;
//     while (s[i])
//     {
//         if (s[i] == av1[1])
//             write (1 , &av2[i], 1);
//         else
//             write (1 , &av1[i], 1);
//         i++;
//     }
// }

// int main(int ac, char **av)
// {
//     int i;

//     i = 0;
//     if (ac == 4)
//     {
//         s_and_r(av[1], av[2], av[3]);
//     }

// }


int  main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 4 && !av[2][1] && !av[3][1])
    {
        while (av[1][i])
        {
            if (av[1][i] == av[2][0])
                av[1][i] = av[3][0];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

/*

int  main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 4 && !av[2][1] && !av[3][1])
    {
        while (av[1][i])
        {
            if (av[1][i] == av[2][0])
                av[1][i] = av[3][0];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
*/