/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:25:53 by famacama          #+#    #+#             */
/*   Updated: 2020/01/14 10:08:01 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	while (dest[i])
		i++;
	if (size <= i)
		l = l + size;
	else
		l = l + i;
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main(void)
**{
**	char src1[] = "Salut19";
**	char dest1[] = "tot hahah";
**	printf("%u", ft_strlcat(src1, dest1, 5));
**	printf("\n");
** 	char src2[] = "Salut19";
** 	char dest2[] = "tot hahah";
** 	printf("%lu", strlcat(src2, dest2, 5));
**}
*/
