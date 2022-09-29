#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

int ft_atoi(const char *str)
{
	int x;
	int sign;
	int result;

	x = 0;
	sign = 1;
	result = 0;

	while(str[x] == 32 || str[x] >= 9 && str[x] <= 13)
	{
		x++;
	}
	if(str[x] == '-')
	{
		sign = - 1;
		x++;
	}
	if(str[x] == '+')
	{
		x++;
	}
	while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
	{
		result *= 10;
		result += str[x] - '0';
		x++;
	}
	return(result * sign);
}

int ft_atoi(const char *str)
{
	int x;
	int sign;
	int result;

	x = 0;
	sign = 1;
	result = 0;
	while(str[x] == 32 || str[x] >= 9 && str[x] <= 13)
	{
		x++;
	}
	while(str[x] == '-')
	{
		sign = -1;
		x++;
	}
	while(str[x] == '+')
	{
		x++;
	}
	while(str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
	{
		result *= 10;
		result += str[x] - '0';
		x++;
	}
	return(result * sign)
}

int ft_atoi(const char *str)
{
	int x;
	int sign;
	int result;

	x = 0;
	sign = 1;
	result = 0;

	while(str[x] == 32 || str[x] >= 9 && str[x <= 13])
	{
		x++;
	}
	if(str[x] == '-')
	{
		sign = -1;
		x++;
	}
	if(str[x] == '+')
	{
		x++;
	}
	while(str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
	{
		result *= 10;
		result += str[x] - '0';
		x++;
	}
	return(result * sign);
}