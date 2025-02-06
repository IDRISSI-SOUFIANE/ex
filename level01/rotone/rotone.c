#include <unistd.h>

void    rotone (char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] == 'Z')
                write(1, "a", 1);
            else
               {
                  char c = s[i] + 1;
                  write (1, &c, 1);
               }
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'z')
                write(1, "a", 1);
            else
            {
                char c = s[i] + 1;
                write (1, &c, 1);
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
        rotone(av[1]);
    write (1, "\n", 1);
}