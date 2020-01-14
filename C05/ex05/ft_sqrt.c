/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:03:36 by famacama          #+#    #+#             */
/*   Updated: 2019/11/11 16:20:00 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	while (i < (nb / 2))
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
**#include <stdio.h>
**int main(void)
**{
**	printf("%d\n", ft_sqrt(1));
**	return(0);
**}
*/
