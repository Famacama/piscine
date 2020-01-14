/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:15:11 by famacama          #+#    #+#             */
/*   Updated: 2019/11/19 18:24:23 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define EVEN(nbr) (nbr % 2) == 0
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 1
# include <unistd.h>

typedef int	t_bool;

#endif
