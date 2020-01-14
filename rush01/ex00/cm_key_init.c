/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cm_key_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:28:14 by famacama          #+#    #+#             */
/*   Updated: 2019/11/10 12:29:22 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_values(int cm_key_sub_sub[4], int i, int j, int k);

void	cm_key_init_one(int cm_key_sub[12][4])
{
	add_values(cm_key_sub[0], 4, 1, 2);
	add_values(cm_key_sub[1], 4, 1, 3);
	add_values(cm_key_sub[2], 4, 2, 1);
	add_values(cm_key_sub[3], 4, 2, 3);
	add_values(cm_key_sub[4], 4, 3, 1);
	add_values(cm_key_sub[5], 4, 3, 2);
	cm_key_sub[6][0] = 0;
}

void	cm_key_init_two(int cm_key_sub[12][4])
{
	add_values(cm_key_sub[0], 1, 4, 2);
	add_values(cm_key_sub[1], 1, 4, 3);
	add_values(cm_key_sub[2], 2, 1, 4);
	add_values(cm_key_sub[3], 2, 4, 1);
	add_values(cm_key_sub[4], 2, 4, 3);
	add_values(cm_key_sub[5], 3, 1, 2);
	add_values(cm_key_sub[6], 3, 1, 4);
	add_values(cm_key_sub[7], 3, 2, 1);
	add_values(cm_key_sub[8], 3, 2, 4);
	add_values(cm_key_sub[9], 3, 4, 1);
	add_values(cm_key_sub[10], 3, 4, 2);
	cm_key_sub[11][0] = 0;
}

void	cm_key_init_three(int cm_key_sub[12][4])
{
	add_values(cm_key_sub[0], 1, 2, 4);
	add_values(cm_key_sub[1], 1, 3, 4);
	add_values(cm_key_sub[2], 1, 3, 2);
	add_values(cm_key_sub[3], 2, 1, 3);
	add_values(cm_key_sub[4], 2, 3, 1);
	add_values(cm_key_sub[5], 2, 3, 4);
	cm_key_sub[6][0] = 0;
}

void	cm_key_init_four(int cm_key_sub[12][4])
{
	add_values(cm_key_sub[0], 1, 2, 3);
	cm_key_sub[1][0] = 0;
}

void	cm_key_init(int cm_key[4][12][4])
{
	cm_key_init_one(cm_key[0]);
	cm_key_init_two(cm_key[1]);
	cm_key_init_three(cm_key[2]);
	cm_key_init_four(cm_key[3]);
}
