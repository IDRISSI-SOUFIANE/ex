#include <unistd.h>

int ft_isSpaceEnd(char c){
	return(c == ' ' || c == '\t' || c == '\0');
}

int main(int argc, char **argv){
	if (argc == 1)
		write(1, "\n", 1);
	int x = 0;
	while (++x < argc){ //loop through each of the string arguments as long as they exist.
		int i = 0;
		while(argv[x][i]){
			if (argv[x][i] >= 'A' && argv[x][i] <= 'Z' && !ft_isSpaceEnd(argv[x][i + 1]))
				argv[x][i] = argv[x][i] + 32; // make lowercase
			else if (argv[x][i] >= 'a' && argv[x][i] <= 'z' && ft_isSpaceEnd(argv[x][i + 1]))
				argv[x][i] = argv[x][i] - 32; // make uppercase
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}