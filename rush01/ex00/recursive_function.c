/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_functon.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:26:49 by famacama          #+#    #+#             */
/*   Updated: 2019/11/10 12:27:09 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number_conflict(int tab[][4], int column_to_compare);
int		is_solution_correct(int tab[][4], int *pov);
void	add_column(int tab[][4], int cm_pos, int *current_cm_key);
void	rm_column(int tab[][4], int cm_pos);
void	print_matrix(int tab[][4]);
void	ft_putchar(char c);

int		solve(int tab[][4], int cm_key[][12][4], int *pov, int cm_pos)
{
	int j;

	if (cm_pos > 1)
	{
		if (number_conflict(tab, cm_pos - 1))
			return (0);
	}
	if (is_solution_correct(tab, pov))
		return (1);
	j = 0;
	while (cm_pos < 4)
	{
		add_column(tab, cm_pos, cm_key[(pov[cm_pos] - 1)][j]);
		if (solve(tab, cm_key, pov, cm_pos + 1))
			return (1);
		else
		{
			rm_column(tab, cm_pos);
			j++;
			if (cm_key[(pov[cm_pos] - 1)][j][0] == 0)
				return (0);
		}
	}
	return (0);
}
