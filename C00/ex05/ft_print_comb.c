/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:28:21 by famacama          #+#    #+#             */
/*   Updated: 2019/10/31 15:55:01 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0 - 1;
	while (++a <= 9)
	{
		b = a;
		while (++b <= 9)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				if (!(a == 7))
					write(1, ", ", 2);
			}
			c++;
		}
		b++;
	}
	a++; 
}
/*
**int main(void)
**{
**	ft_print_comb();
**	return(0);
**}
*/
