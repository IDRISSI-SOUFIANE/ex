#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            break;
        i++;
    }
    if (s1[i] != s2[i])
        return (s1[i] - s2[i]);

    // printf("s1: %d | s2[i]: %d\n", s1[i], s2[i]);

    return (s1[i] - s2[i]);
}

int main()
{
    char s1[] = "hello";
    char s2[] = "World";

    if (!ft_strcmp(s1, s2))
        printf("Yes it's matches");
    else
        printf("No it's not matches");
}

/*

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}	

*/