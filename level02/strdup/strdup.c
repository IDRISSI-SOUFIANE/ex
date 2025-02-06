#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *str;
    int     i;
    int     len;
    
    if (!src)
        return (NULL);
 
    i = 0;
    len = ft_strlen(src);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[len] = '\0';
    return (str);
}

int main()
{
    char str[] = "hello";

    char *res = ft_strdup(str);

    printf("%s\n", res);

    ft_strdup(str);
}