#include <unistd.h>

int main(int ac, char **av)
{
	int x;

	x = -1;
	if (ac > 1)
	{
		while(av[ac - 1][++x])
		{
			write(1, &av[ac-1][x], 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}