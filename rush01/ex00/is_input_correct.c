/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_input_correct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:57:51 by bbouvy            #+#    #+#             */
/*   Updated: 2019/11/09 15:35:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_input_correct(char *input)
{
	int i;
	int number_of_pov;

	i = 0;
	number_of_pov = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0) //take one number of two ex 0,2,4,6,..
		{
			if (!('1' <= input[i] && input[i] <= '4'))
				return (0);
			else
				number_of_pov++;
		}
		else
		{
			if (input[i] != ' ')
				return (0);
		}
		i++;
	}
	if (number_of_pov != 16 || i > 31)
		return (0);
	return (number_of_pov);
}
