/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:18:57 by famacama          #+#    #+#             */
/*   Updated: 2019/11/11 16:22:55 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (--nb > 1)
		i = i * nb;
	return (i);
}
/*
**int main(void)
**{
**	printf("%d", ft_iterative_factorial(12));
**	return (1);
**	return(0);
**}
*/
