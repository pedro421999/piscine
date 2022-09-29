/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psottoma <psottoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:51:16 by psottoma          #+#    #+#             */
/*   Updated: 2022/09/14 10:21:01 by psottoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{
	int *div;
	int *mod;
	int x;
	int y;
	x = 10;
	y = 2;

	div = &x;
	div = &y;
	ft_div_mod(x, y, div, mod);
	printf("%d%d\n", *div, *mod);
}
*/