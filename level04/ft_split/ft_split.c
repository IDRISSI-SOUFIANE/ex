#include <stdio.h>
#include <stdlib.h>

#define malloc(size_t) NULL

void f()
{
	system("leaks a.out");
}

unsigned int	is_space(char c, char sp)
{
	return (c == sp);
}


void	*ft_free(char **s, unsigned int count)
{
	unsigned int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}
unsigned int	count_word(char *s, char sp)
{
	unsigned int	i;
	unsigned int	count;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		if (!(is_space(s[i], sp)) && s[i])
		{
			count++;
			while (!(is_space(s[i], sp)) && s[i])
				i++;
		}
		else
            i++;
	}
	return (count);
}
char	*fill_word(char *s, char sp, unsigned int *preffix)
{
	unsigned int	i;
	unsigned int	len_word;
	char			*word;

	len_word = 0;
	i = *preffix;

	while(s[i] && is_space(s[i], sp))
		i++;
	*preffix = i;
	while (s[i] && !(is_space(s[i], sp)))
	{
		i++;
		len_word++;
	}
	word = (char *)malloc((len_word + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len_word)
		word[i++] = s[(*preffix)++];
	word[len_word] = '\0';
	return (word);
}
char	**ft_split(char *s, char sp)
{
	unsigned int	i;
	unsigned int	count_d;
	unsigned int	preffix;
	char			**word_arr;

	if (!s)
		return (NULL);
	i = 0;
	preffix = 0;
	count_d = count_word(s, sp);
	word_arr= (char **)malloc((count_d + 1) * sizeof(char *));
	if (!word_arr)
		return (NULL);
	while(i < count_d)
	{
		word_arr[i] = fill_word(s, sp, &preffix);
		if (!word_arr[i])
			return (ft_free(word_arr, i));
		i++;
	}
	word_arr[count_d] = NULL;
	return (word_arr);
}

// int	main()
// {
// 	atexit(f);
// 	char	**result;
// 	int		i;
	
// 	i = 0;
// 	char str[] = "hello world 123";
// 	result = ft_split(str, ' ') ;
// 	if (!result)
// 		return (0);
// 	while(result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }


int main()
{
    int     i;
    char    **res;
    char str[] = "hello world	1337\n .";
    res = ft_split(str, " \n	");
    i = 0;
	while (res[i])
	{
		printf("%s", res[i]);
		i++;
		// free(res[i]);
	}
		// free(res);
}