/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:20:33 by famacama          #+#    #+#             */
/*   Updated: 2019/11/04 17:20:47 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowc(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowc(str);
	if (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
	i = 1;
	while (str[i])
	{
		if (!(((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
			(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
			(str[i - 1] >= '0' && str[i - 1] <= '9'))))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
**#include <stdio.h>
**int main(void)
**{
**	char str[] = "salut, comment tu vas ? 42mots quarante-d";
**	printf("%s\n", ft_strcapitalize(str));
**	return(0);
**}
*/
