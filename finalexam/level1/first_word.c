#include <unistd.h>


void ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int ac, char **av)
{
	int x;

	x = 0;
	if (ac == 2)
	{
		while(av[1][x] == ' ' || av[1][x] == '\t')
		{
			x++;
		}
		while(av[1][x] != '\0' && av[1][x] != ' ' && av[1][x] != '\t')
		{
			ft_putchar(av[1][x]);
			x++;
		}
	}
	ft_putchar('\n');
	return(0);
}


