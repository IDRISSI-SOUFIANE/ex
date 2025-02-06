// #include <stdlib.h>
// #include <libc.h>


// void	*ft_free(char **str, int count)
// {
// 	int i = 0;

// 	while (i <= count)
// 	{
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	str = NULL;
// 	return (NULL);
// }

// int	is_sp(char c, char *sp)
// {
// 	int	i;

// 	i = 0;
// 	while (sp[i])
// 	{
// 		if (sp[i] == c)
// 			return (1);
// 			i++;
// 	}
// 	return (0);
// }

// int	ft_count_word(char *s, char *sp)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		if (s[i] && !is_sp(s[i], sp))
// 		{
// 			count++;
// 			while (s[i] && !is_sp(s[i], sp))
// 				i++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (count);
// }

// char	*ft_strdup(unsigned int *preffix, char *s, char *sp)
// {
// 	unsigned int	i;
// 	unsigned int	len_word;
// 	char			*word;

// 	len_word = 0;
// 	i = *preffix;
// 	while (s[i] && is_sp(s[i], sp))
// 		i++;
// 	*preffix = i;
// 	// i = 0;
// 	while (s[i] && !is_sp(s[i], sp))
// 	{
// 		i++;
// 		len_word++;
// 	}
// 	word = (char *)malloc((len_word) * sizeof(char));
// 	if (!word)
// 		return (NULL);
// 	i = 0;
// 	while (i < len_word)
// 	{
// 		word[i] = s[(*preffix)++];
// 		i++;
// 	}
// 	word[len_word] = '\0';
// 	return (word);
// }

// char	**ft_split(char *s, char *sp)
// {
// 	unsigned int	i;
// 	unsigned int	count_word;
// 	unsigned int	preffix;
// 	char			**word_arr;

// 	if (!s)
// 		return (NULL);

// 	i = 0;
// 	preffix = 0;
// 	count_word = ft_count_word(s, sp);
// 	word_arr = (char **)malloc((count_word + 1) * sizeof(char *));
// 	if (!word_arr)
// 		return (NULL);
// 	while (i < count_word)
// 	{
// 		word_arr[i] = ft_strdup(&preffix, s, sp);
// 		if (!word_arr[i])
// 			return ((ft_free(word_arr, i)));
// 		i++;
// 	}
// 	word_arr[count_word] = NULL;
// 	return (word_arr);
// }

// int main()
// {
//     int     i;
//     char    **res;
// 	// char sp[] = "\n .	";
//     char str[] = "hello world	1337\n .";
//     res = ft_split(str, ("\n .	"));
//     i = 0;
// 	while (res[i])
// 	{
// 		printf("%s \n", res[i]);
// 		i++;
// 	}
// }

#include <stdlib.h>
#include <stdio.h>

// char        **ft_split(char *str)
// {
//     int        i;
//     int        j;
//     int        k;
//     char    **split;

//     i = 0;
//     k = 0;
//     if (!(split = (char **)malloc(sizeof(char *) * 256)))
//         return (NULL);
//     while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
//         i += 1;
//     while (str[i])
//     {
//         j = 0;
//         if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
//             return (NULL);
//         while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
//             split[k][j++] = str[i++];
//         while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
//             i += 1;
//         split[k][j] = '\0';
//         k += 1;
//     }
//     split[k] = NULL;
//     return (split);
// }


// int main()
// {
//     int     i;
//     char    **res;
//     char str[] = "hello world	1337\n .";
//     res = ft_split(str);
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("%s \n", res[i]);
// 		i++;
// 	}
// }




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