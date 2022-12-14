/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psottoma <psottoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:51:13 by psottoma          #+#    #+#             */
/*   Updated: 2022/09/14 10:19:51 by psottoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*int main()
{
	int *y;
	int *z;
	int d;
	int c;
	d = 42;
	c = 24;

	y = &d;
	z = &c;
	ft_swap(y, z);
	printf("%d%d\n", *y, *z);
}
*/