/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_conflict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 19:45:57 by tmelvin           #+#    #+#             */
/*   Updated: 2019/08/18 18:08:08 by tmelvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number_conflict(int tab[][4], int column_to_compare)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][column_to_compare] == tab[i][j])
				if (column_to_compare != j)
					return (1);
			j++;
		}
		i++;
	}
	return (0);
}
