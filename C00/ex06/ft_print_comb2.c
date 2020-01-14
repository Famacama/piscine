/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:22:08 by famacama          #+#    #+#             */
/*   Updated: 2019/10/30 20:17:34 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	b = 0;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			write(1, " ", 1);
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			if (!(a == 98))
			{
				write(1, ", ", 2);
			}
		}
	}
}
/*
**int main(void)
**{
**	ft_print_comb2();
**	return(0);
**}
*/
