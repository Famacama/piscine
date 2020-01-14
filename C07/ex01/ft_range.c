/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:17:23 by famacama          #+#    #+#             */
/*   Updated: 2019/11/18 11:27:16 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;
	int		j;

	j = min;
	i = 0;
	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
**int main()
**{
**	ft_range(2, 9);
**	return(0);
**}
*/
