#include <unistd.h>

int main(int ac, char **av)
{
	int x;

	x = 0;
	if (ac == 4)
	{
		while(av[1][x] != '\0')
		{
			if(av[1][x] == av[2][0])
			{
				write(1, &av[3][0], 1);
			}
			else
				write(1, &av[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return(0);
}