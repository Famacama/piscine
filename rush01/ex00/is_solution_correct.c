/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_slution_correct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:23:46 by famacama          #+#    #+#             */
/*   Updated: 2019/11/10 12:24:11 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		count_boxes_seen(int *cr)
{
	int i;
	int highest_box;
	int boxes_seen;

	i = 0;
	highest_box = 0;
	boxes_seen = 0;
	while (i < 4)
	{
		if (cr[i] > highest_box)
		{
			highest_box = cr[i];
			boxes_seen++;
		}
		i++;
	}
	return (boxes_seen);
}

void	choose_cr_to_test(int src[][4], int *dest, int rc_index)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (rc_index < 8)
		{
			if (rc_index < 4)
				dest[i] = src[i][rc_index];
			else
				dest[i] = src[3 - i][rc_index - 4];
		}
		else
		{
			if (rc_index < 12)
				dest[i] = src[rc_index - 8][i];
			else
				dest[i] = src[rc_index - 12][3 - i];
		}
		i++;
	}
}

int		is_solution_correct(int tab[][4], int *pov)
{
	int i;
	int current_cr[4];

	i = 0;
	while (i < 15)
	{
		choose_cr_to_test(tab, current_cr, i);
		if (count_boxes_seen(current_cr) != pov[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
