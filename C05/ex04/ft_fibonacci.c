/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:59:07 by famacama          #+#    #+#             */
/*   Updated: 2019/11/06 19:32:54 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (1);
	index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
/*
**int main(void)
**{
**	printf("%d\n", ft_fibonacci(3));
**	return(0);
**}
*/
