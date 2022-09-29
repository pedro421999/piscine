#include <unistd.h>

int str_len(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char *ft_rev_print(char *str)
{
	int len;

	len = str_len(str);
	len--;
	while(len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	/*write(1, "\n", 1);*/
	return(str);	
}

int main()
{
	char str[] = "gbrireugneb";
	ft_rev_print(str);
}

