#include <unistd.h>

void    alpha_miror(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            char c = ('A' + 'Z') - s[i];
            write(1, &c, 1);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            char c = ('a' + 'z') - s[i];
            write(1, &c, 1);
        }
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        alpha_miror(av[1]);
    write(1, "\n", 1);
}
/* Mirrored=End−(Current−Start)


#include <unistd.h>

void alpha_mirror(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'z' - (str[i] - 'a');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'Z' - (str[i] - 'A');
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write(1, "\n", 1);
    return 0;
}



*/

//https://www.khanacademy.org/math/geometry/hs-geo-transformations/hs-geo-reflections/v/points-on-line-of-reflection