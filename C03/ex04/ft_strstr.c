/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:31:25 by famacama          #+#    #+#             */
/*   Updated: 2019/11/07 12:47:24 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!(to_find[0]))
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main(void)
**{
**	char str1[] = "Salut comment ca vas a 19";
**	char to_find1[] = "tot";
**	printf("%s", ft_strstr(str1, to_find1));
**	printf("\n");
**	char str2[] = "Salut comment ca vas a 19";
**	char to_find2[] = "tot";
**	printf("%s", strstr(str2, to_find2));
**}
*/
