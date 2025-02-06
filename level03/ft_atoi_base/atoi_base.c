// int	ft_atoi_base(const char *str, int str_base)
// {
// 	int	res = 0;
// 	int	sign = 1;
// 	int	i = 0;
// 	int c;
// 	if (*str == '-')
// 	{
// 		sign = -1;
// 		str++;
// 	}
// 	while (str[i])
// 	{
// 		if (str[i] >= '0' && str[i] <= '9')
// 			c = str[i] - '0';
// 		else if (str[i] >= 'a' && str[i] <= 'f')
// 			c = str[i] - 'a' + 10;
// 		else if (str[i] >= 'A' && str[i] <= 'F')
// 			c = str[i] - 'A' + 10;
// 		else
// 			break;
// 		res = res * str_base + c;
// 		i++;
// 	}
// 	return (res * sign);
// }


// #include <stdio.h>

// #include <stdio.h>

// int ft_atoi_base(const char *str, int str_base);

// int main(void)
// {
//     const char *str1 = "64"; // Example string in base 16
//     // const char *str2 = "-1010"; // Example string in base 2
//     const char *str3 = "7F"; // Example string in base 16
//     int base1 = 16;
//     int base2 = 2;
//     int base3 = 16;

//     printf("String: %s, Base: %d, Result: %d\n", str1, base1, ft_atoi_base(str1, base1));
//     // printf("String: %s, Base: %d, Result: %d\n", str2, base2, ft_atoi_base(str2, base2));
//     // printf("String: %s, Base: %d, Result: %d\n", str3, base3, ft_atoi_base(str3, base3));

//     return 0;
// }

//*********************************************************//

#include <libc.h>

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    int c;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            c = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            break;
        res = res * str_base + c;
        i++;
    }
    return (res * sign);
}

int main(void)
{
    // const char *str1 = "100"; // Example string in base 16
    const char *str2 = "B"; // Example string in base 2
    // const char *str3 = "7F"; // Example string in base 16
    // int base1 = 16;
    int base2 = 16;
    // int base3 = 16;

    // printf("String: %s, Base: %d, Result: %d\n", str1, base1, ft_atoi_base(str1, base1));
    printf("String: %s, Base: %d, Result: %d\n", str2, base2, ft_atoi_base(str2, base2));
    // printf("String: %s, Base: %d, Result: %d\n", str3, base3, ft_atoi_base(str3, base3));

    return 0;
}

