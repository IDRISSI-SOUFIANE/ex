#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}


void	*ft_free(char **str, int count)
{
	int i = 0;

	while (i <= count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
	return (NULL);
}

int	is_sp(char c, char *sp)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		if (sp[i] == c)
			return (1);
			i++;
	}
	return (0);
}

int	ft_count_word(char *s, char *sp)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && !is_sp(s[i], sp))
		{
			count++;
			while (s[i] && !is_sp(s[i], sp))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strdup(unsigned int *preffix, char *s, char *sp)
{
	unsigned int	i;
	unsigned int	len_word;
	char			*word;

	len_word = 0;
	i = *preffix;
	while (s[i] && is_sp(s[i], sp))
		i++;
	*preffix = i;
	// i = 0;
	while (s[i] && !is_sp(s[i], sp))
	{
		i++;
		len_word++;
	}
	word = (char *)malloc((len_word) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len_word)
	{
		word[i] = s[(*preffix)++];
		i++;
	}
	word[len_word] = '\0';
	return (word);
}

char	**ft_split(char *s, char *sp)
{
	unsigned int	i;
	unsigned int	count_word;
	unsigned int	preffix;
	char			**word_arr;

	if (!s)
		return (NULL);

	i = 0;
	preffix = 0;
	count_word = ft_count_word(s, sp);
	word_arr = (char **)malloc((count_word + 1) * sizeof(char *));
	if (!word_arr)
		return (NULL);
	while (i < count_word)
	{
		word_arr[i] = ft_strdup(&preffix, s, sp);
		if (!word_arr[i])
			return ((ft_free(word_arr, i)));
		i++;
	}
	word_arr[count_word] = NULL;
	return (word_arr);
}


void    rev_wstr(char *s)
{
    char sp[] = "	\n ";
	char	**res;
	int		i;

	res = ft_split(s, sp);
	i = 0;
	while (res[i])
	{
		i++;
	}

	i--;
	while (i)
	{
		write(1, res[i], ft_strlen(res[i]));
		write(1, " ", 1);
		i--;
	}
	write(1, res[i], ft_strlen(res[i]));
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1,"\n", 1);
}