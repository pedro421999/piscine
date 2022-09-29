/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psottoma <psottoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:51:23 by psottoma          #+#    #+#             */
/*   Updated: 2022/09/14 10:27:16 by psottoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main()
{
	int x = 10;
	int y = 2;
	int *a = &x;
	int *b = &y;
	ft_ultimate_div_mod(a, b);
	printf("%d%d\n", *a, *b);
}
*/
