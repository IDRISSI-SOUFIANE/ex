#include <unistd.h>
#include <stdio.h>


char	*ft_strrev(char *s)
{
    int i;
    int len;
    char    tmp;


    i = 0;
    len = 0;
    while (s[len])
        len++;
    i = -1;
    while (++i < --len)
    {
        tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
    }
    return (s);
}


int main()
{
    char str[] = "abcdef";
    printf("%s\n", ft_strrev(str));
}