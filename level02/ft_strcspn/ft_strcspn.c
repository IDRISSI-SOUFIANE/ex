#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (reject[i] && *s != reject[i])
            i++;
        if (reject[i] != '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}

int main()
{
    const char s[] = "Welcome to 1337\nHello";
    const char accept[] = "Weo";
    size_t result = ft_strcspn(s, accept);
    printf("Length of initial segment: %zu\n", result);
    return 0;
}