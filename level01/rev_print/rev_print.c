#include <unistd.h>

void    rev_print(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    i--;
    while (i)
    {
        write (1, &s[i], 1);
        i--;
    }
}


int main(int ac, char **av)
{
    if (ac == 2)
        rev_print(av[1]);
    write (1, "\n", 1);
}