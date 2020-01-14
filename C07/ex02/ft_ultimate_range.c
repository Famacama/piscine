/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:59:07 by famacama          #+#    #+#             */
/*   Updated: 2019/11/17 09:37:22 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;
	int		j;

	j = min;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (j < max)
	{
		tab[i] = j;
		j++;
		i++;
	}
	*range = tab;
	return (max - min);
}
/*
**#include <stdio.h>
**int main()
**{
**	int **range;
**	printf("%d", ft_ultimate_range(range, 4, 7));
**	return(0);
**}
*/
