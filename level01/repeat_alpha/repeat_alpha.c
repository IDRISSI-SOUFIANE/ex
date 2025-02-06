#include <unistd.h>

void    repeat(char *s)
{
    int i;
    int j;
    int pos;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            pos = (s[i] - 'A') + 1;
            j = 0;
            while (s[i] && pos > j)
            {
                write(1, &s[i] ,1);
                j++;
            }
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            pos = 0;
            j = 0;
            pos = (s[i] - 'a') + 1;
            while (s[i] && pos > j)
            {
                write(1, &s[i] ,1);
                j++;
            }
        }
        else
            write (1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat(av[1]);
    write (1, "\n" ,1);
}
