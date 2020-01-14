/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:14:10 by famacama          #+#    #+#             */
/*   Updated: 2019/11/06 20:36:37 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb != 0)
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
**int		main(void)
**{
**	ft_recursive_factorial(5);
**	return(0);
**}
*/
