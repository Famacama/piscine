/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:30:03 by famacama          #+#    #+#             */
/*   Updated: 2019/11/10 12:30:28 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve(int tab[][4], int cm_key[][12][4], int *pov, int cm_pos);
void	print_matrix(int tab[][4]);
void	print_error_msg(void);
void	tab_init(int tab[4][4]);
void	cm_key_init(int cm_key[4][12][4]);
void	pov_init(int pov[16], char **argv);
int		is_input_correct(char *input);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	add_values(int cm_key_sub_sub[4], int i, int j, int k)
{
	cm_key_sub_sub[0] = i;
	cm_key_sub_sub[1] = j;
	cm_key_sub_sub[2] = k;
	cm_key_sub_sub[3] = 10 - i - j - k;
}

int		main(int argc, char **argv)
{
	int		pov[16];
	int		tab[4][4];
	int		cm_key[4][12][4];

	if (argc != 2 || !(is_input_correct(argv[1])))
	{
		print_error_msg();
		return (0);
	}
	tab_init(tab);
	cm_key_init(cm_key);
	pov_init(pov, argv);
	if (solve(tab, cm_key, pov, 0))
	{
		print_matrix(tab);
	}
	else
		print_error_msg();
	return (0);
}
