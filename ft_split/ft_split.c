#include <stdlib.h>
#include <libc.h>



/*

char	**ft_split(char *str)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

*/

char    **ft_split(char *str)
{
    int     i;
    int     j;
    int     k;
    char    **split;


    split  = NULL;
    i = 0;
    k = 0;
    if (!(split = (char **)malloc(sizeof(char *) * 256)))
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        j = 0;
        if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
            return (NULL);
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return (split);
}

int main()
{
    int     i;
    char    **res;
    char str[] = "hello world	1337\n .";
    res = ft_split(str);
	i = 0;
	while (res[i])
	{
		printf("%s \n", res[i]);
		i++;
	}
}