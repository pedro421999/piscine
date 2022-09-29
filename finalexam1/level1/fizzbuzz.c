#include <unistd.h>

void ft_putchar(char c)
{
	if (c > 9)
	{
		ft_putchar(c/10);
	}
	write(1, &"0123456789"[c % 10], 1);
}

int main(int ac, char **av)
{
	int x;
	
	x = 0;
	while(x <= 100)
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