/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:47:28 by famacama          #+#    #+#             */
/*   Updated: 2019/11/14 15:35:10 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ecri(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ecri(str[i++]);
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 0;
	if (argc <= 1)
		return (0);
	while (++i < argc)
		while (argv[j + 1])
		{
			if (0 < ft_strcmp(argv[j], argv[j + 1]))
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
				j = 0;
			}
			j++;
		}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
