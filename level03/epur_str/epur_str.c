#include <unistd.h>

void    epur_str(char *s)
{
    int i;
    int flag;

    flag = 0;
    i = 0;
    while (s[i])
    {
        if ((s[i] >= 9 && s[i] <= 13) || s[i] == 32 || s[i] == '\t')
            i++;
        if (!(s[i] >= 9 && s[i] <= 13) || s[i] != 32 || s[i] != '\t')
            break;
        i++;
    }
    while (s[i])
    {
        if ((s[i] >= 9 && s[i] <= 13) || s[i] == 32 || s[i] == '\t')
            flag = 1;
        if (!(s[i] >= 9 && s[i] <= 13) && s[i] != 32 && s[i] != '\t')
        { 
          if (flag)
                write(1, " ", 1);
            flag = 0;
            write(1, &s[i] ,1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write (1,"\n", 1);
    return (0);
}