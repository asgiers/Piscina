/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esolsona <esolsona@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:17:46 by esolsona          #+#    #+#             */
/*   Updated: 2022/12/04 20:33:47 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	char_int(char c)
{
	int	count;

	count = 0;
	while (c > '0')
	{
		++count;
		--c;
	}
	return (count);
}

void	set_max_min(char *p, char **mat)
{
	int		col;
	int		row;
	int		pos_max;
	char	c_col;
	int		tmp;
	int		i;

	pos_max = 1;
	col = 0;
	i = 1;
	while (col < 4)
	{	
		c_col = p[col] - 1;
		pos_max = char_int(c_col);
		mat[pos_max][col] = '4';
		if (pos_max == 4 - 1)
		{
			while (pos_max > 0)
			{
				--pos_max;
				mat[pos_max][col] = c_col;
				--c_col;
			}
		}
		++col;
	}
}
