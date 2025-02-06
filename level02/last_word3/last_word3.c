#include <unistd.h>

void    last_word(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    i--;
    while (i >= 0 && ((s[i] >= 9 && s[i] <= 13) ||  s[i] == 32))
        i--;
    while (i >= 0 && !(s[i] >= 9 && s[i] <= 13) &&  s[i] != 32)
        i--;
    i++;
    while (s[i] && !(s[i] >= 9 && s[i] <= 13) &&  s[i] != 32)
    {
        write(1, &s[i], 1);
        i++;
    }
    
}

int main(int ac, char **av)
{
    if (ac == 2)
        last_word(av[1]);
    write(1,"\n", 1);

    return (0);
}


/* false logic
int main(int ac, char *av[])
{
    int i = 0;
    if  (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        if (av[1][i] == ' ')
        {
            while (av[1][i] == ' ')
                i--;
            
        }
        while (av[1][i] != ' ')
            i--;
        i++;
        while (av[1][i] && av[1][i] != ' ')
        {
            write(1,&av[1][i++],1);
        }
    }
    write(1,"\n",1);
}
*/

/* false logic
int main(int ac, char *av[])
{
    int i = 0;
    if  (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        if (av[1][i] == ' ')
        {
            while (av[1][i] == ' ')
                i--;
            
        }
        while (av[1][i] != ' ')
            i--;
        i++;
        while (av[1][i] && av[1][i] != ' ')
        {
            write(1,&av[1][i++],1);
        }
    }
    write(1,"\n",1);
}
*/