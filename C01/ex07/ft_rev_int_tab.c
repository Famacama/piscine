/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:22:05 by famacama          #+#    #+#             */
/*   Updated: 2019/10/31 20:10:09 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int swap;

	x = 0;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = swap;
		x++;
	}
}
/*
**int main(void)
**{
**	int tab[] = {1, 2, 3,4, 5, 6};
**	ft_rev_int_tab(tab, 6);
**}
*/
