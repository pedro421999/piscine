/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psottoma <psottoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:51:36 by psottoma          #+#    #+#             */
/*   Updated: 2022/09/14 10:26:52 by psottoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	a;
	int	swp;

	x = 0;
	while (x < size)
	{
		a = x + 1;
		while (a < size)
		{
			if (tab[x] > tab[a])
			{
				swp = tab[x];
				tab[x] = tab[a];
				tab[a] = swp;
			}
			a++;
		}
		x++;
	}
}

/*int main()
{
    int c[] = {3,2,5,1,4};
    ft_sort_int_tab(c, 5);
    printf("%d%d%d%d%d\n", c[0], c[1], c[2], c[3], c[4]);
}
*/
