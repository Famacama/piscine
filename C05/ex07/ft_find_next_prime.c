/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:28:04 by famacama          #+#    #+#             */
/*   Updated: 2019/11/12 20:15:08 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb / i)
	{
		if (nb % ++i == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		++nb;
	return (nb);
}
/*
**#include <stdio.h>
**int main(void)
**{
**	printf("%d", ft_find_next_prime(11));
**	return(0);
**}
*/
