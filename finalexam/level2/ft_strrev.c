#include <stdio.h>

int str_len(char *str)
{
	int c;
	
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return(c);
}
char *ft_strrev(char *str)
{
	int len;
	int x;
	char swp;

	x = 0;
	len = str_len(str);
	len--;
	while(len > x)
	{
		swp = str[x];
		str[x] = str[len];
		str[len] = swp;
		x++;
		len--;
	}
	return(str);
}

int main(void)
{
	char str[] = "hello";
	printf("%s",ft_strrev(str));
}