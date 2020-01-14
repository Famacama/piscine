/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:21:13 by famacama          #+#    #+#             */
/*   Updated: 2019/11/07 17:40:26 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
**#include <stdio.h>
**#include <string.h>
**#include <stdlib.h>
**
**int main(void)
**{
**	char s1[] = "famahello";
**	char s2[] = "fama";
**	printf("%d", ft_strncmp(s1, s2, 4));
**	printf("\n");
**	printf("%d", strncmp(s1, s2, 4));
**	return(0);
**}
*/
