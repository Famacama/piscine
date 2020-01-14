/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:24:00 by famacama          #+#    #+#             */
/*   Updated: 2019/11/19 11:56:40 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkbase(char *base)
{
	int		i;
	int		j;

	i = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (base[i])
	{
		j = i + 1;
		if ((base[i] == '+') || (base[i] == '-'))
			return (0);
		if ((base[i] == ' ') || (base[i] == '\t') || (base[i] == '\n')
				|| (base[i] == '\r') || (base[i] == '\v') || (base[i] == '\f'))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int sign;
	int j;

	res = 0;
	sign = 1;
	j = -1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
			|| (*str == '\r') || (*str == '\v') || (*str == '\f'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (base[++j])
		if (*str == base[j] && checkbase(base))
		{
			res = res * checkbase(base) + j;
			j = -1;
			str++;
		}
	return (sign > 0 ? res : -res);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi_base("123", "poneyvif"));
}

