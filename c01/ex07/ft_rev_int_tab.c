/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psottoma <psottoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:40:53 by psottoma          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:48 by psottoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swp;

	x = 0;
	swp = 0;
	while (x < size / 2)
	{
		swp = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = swp;
		x++;
	}
}

/*int main()
{
	int c[] = {5,4,3,2,1};
	ft_rev_int_tab(c, 5);
	printf("%d%d%d%d%d\n", c[0], c[1], c[2], c[3], c[4]);
}
*/