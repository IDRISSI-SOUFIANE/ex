#include <unistd.h>
#include <stdio.h>

void    first_word(char **s)
{
    int    i;
    int    j;

    i = 1;
    j = 0;
    while (((s[i][j] >= 9 && s[i][j] <= 13) || (s[i][j] == ' ')) && s[i][j])
        j++;
    while ((!(s[i][j] >= 9 && s[i][j] <= 13) && (s[i][j] != ' '))  && s[i][j] )
    {
        write(1, &s[i][j], 1);
        j++;
    }
}



#include <unistd.h>

int main(int ac, char *av[])
{
    int j = 0;
    int i = 1;
    if (ac == 2)
    {
        while (av[i][j] != '\0' && av[i][j] == ' ')
            j++;
        while (av[i][j] != '\0' && av[i][j] != ' ')
        {
            write(1, &av[i][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}


int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av);
    write(1, "\n", 1);
}
/*
Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/