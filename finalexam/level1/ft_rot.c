#include <unistd.h>

void rotone(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if((str[x] >= 'a' && str[x] <= 'y') || (str[x] >= 'A' && str[x] <= 'Y'))
		{
			str[x] += 1;
		}
		else if (str[x] == 'Z' || str[x] == 'z')
		{
			str[x] -= 25;
		}
		write(1, &str[x], 1);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rotone(av[1]);
	}
	write(1, "\n", 1);
}

