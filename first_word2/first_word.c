/*#include <unistd.h>

void    first_word(char *s)
{
    int i;

    i = 0;
    while (s[i] && (s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
        i++;
    while (s[i] && (s[i] < 9 && s[i] > 13) && s[i] != 32)
    {
        write(1, &s[i] ,1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    write(1, "\n", 1);
}
*/

#include <unistd.h>

void    first_word(char *s)
{
    int i = 0;

    // Skip leading spaces and tabs
    while (s[i] && (s[i] == 32 || (s[i] >= 9 && s[i] <= 13)))
        i++;

    // Print the first word
    while (s[i] && s[i] != 32 && (s[i] < 9 || s[i] > 13))
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    write(1, "\n", 1);
    return 0;
}
