/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:21:23 by famacama          #+#    #+#             */
/*   Updated: 2019/11/06 14:16:32 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		power--;
		nb = i * nb;
	}
	return (nb);
}
/*
**int main(void)
**{
**	ft_iterative_power(3, 3);
**	return(0);
**}
*/
