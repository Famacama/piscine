/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:20:32 by famacama          #+#    #+#             */
/*   Updated: 2019/11/10 12:20:50 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	add_column(int tab[][4], int cm_pos, int *current_cm_key)
{
	int i;

	i = 0;
	while (i < 4)
	{
		tab[i][cm_pos] = current_cm_key[i];
		i++;
	}
}
