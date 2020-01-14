/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:57:31 by famacama          #+#    #+#             */
/*   Updated: 2019/11/13 17:32:43 by famacama         ###   ########.fr       */
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

#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(2147483647));
	return(0);
}

