/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:56:32 by famacama          #+#    #+#             */
/*   Updated: 2019/11/05 16:04:27 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[j] && n < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
