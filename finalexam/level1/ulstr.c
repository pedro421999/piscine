#include <unistd.h>

void ulstr(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if(str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32; 
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		write(1, &str[x], 1);
		x++;	
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ulstr(av[1]);
	}
	write(1, "\n", 1);
}