#include <unistd.h>

int main(int ac, char **av)
{
	int repeat;
	int x;

	

	if (ac == 2)
	{
		x = 0;
		while(av[1][x] != '\0')
		{
			repeat = 1;
			if (av[1][x] >= 'a' && av[1][x] <= 'z')
				repeat += av[1][x] - 'a';
			else if (av[1][x] >= 'A' && av[1][x] <= 'Z')
				repeat += av[1][x] - 'A';
			while(repeat > 0)
			{
				write(1, &av[1][x], 1);
				repeat--;
			}
			x++;
		}	
	}
	write(1, "\n", 1);
	return(0);
}