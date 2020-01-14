/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:52:58 by famacama          #+#    #+#             */
/*   Updated: 2019/11/06 14:23:25 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = i * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
**int main(void)
**{
**	ft_recursive_power(3, 3);
**	return(0);
**}
*/
