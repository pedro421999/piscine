#include <unistd.h>

void rot13(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'm') || (str[x] >= 'A' && str[x] <= 'M'))
		{
			str[x] += 13;
		}
		else if ((str[x] >= 'n' && str[x] <= 'z') || (str[x] >= 'N' && str[x] <= 'Z'))
		{
			str[x] -= 13;
		}
		write(1, &str[x], 1);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rot13(av[1]);
	}
	write(1, "\n", 1);
}