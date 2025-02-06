#include <unistd.h>


void	ft_putstr(char *s)
{
	while (*s)
	{
		write (1, &(*s), 1);
		s++;
	}
}

int	main()
{
	char s[] = "hello World! 1337";
	ft_putstr(s);
	return (0);
}