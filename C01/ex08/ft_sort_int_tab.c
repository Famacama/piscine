/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:10:26 by famacama          #+#    #+#             */
/*   Updated: 2019/11/12 18:43:02 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 0;
	j = i + 1;
	while (j <= size)
	{
		if (tab[i] > tab[j])
		{
			swap = tab[i];
			tab[i] = tab[j];
			tab[j] = swap;
			i = 0;
			j = i + 1;
		}
		else
		{
			i++;
			j = i + 1;
		}
	}
}
/*
**int main(void)
**{
**	int tab[] = {5, 3, 6, 1, 2, 4};
**	ft_sort_int_tab(tab, 5);
**}
*/
