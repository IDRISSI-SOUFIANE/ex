#include <unistd.h>

int is_sp(char c)
{
    return ((c == ' ') || (c >= 9 && c <= 13));
}

void	str_capitalizer(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (is_sp(str[i - 1])))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}