#include <unistd.h>

int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}
void    to_lwoer(char c)
{
    char cha = c + 32;
    write(1, &cha, 1);
}
void    c_t_s(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (is_upper(s[i]))
        {
            write(1,"_", 1);
            to_lwoer(s[i]);
        }
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        c_t_s(av[1]);
    write(1, "\n", 1);
    return (0);
}