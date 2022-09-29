#include <unistd.h>

void ft_putchar(int x)
{
	if (x> 9)
		ft_putchar(x/ 10);
	write(1, &"0123456789"[x % 10], 1);
}

int main(int ac, char **av)
{
	int x;

	x = 1;
	while (x <= 100)
	{
		if(x % 3 == 0 && x % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(x % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(x % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			ft_putchar(x);
		write(1, "\n", 1);
		x++;
	}
}