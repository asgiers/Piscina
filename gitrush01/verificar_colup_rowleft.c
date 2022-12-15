/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificar_colup_rowleft.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgiers <asgiers@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:32:22 by asgiers           #+#    #+#             */
/*   Updated: 2022/12/04 19:40:13 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	test(char *p)
{
	int	pos;
	int	count;

	pos = 0;
	count = 0;
	while (count < 4)
	{
		while (pos < 4)
		{
			if (pos != count && p[pos] == p[count])
			{
				return ('1');
			}
			++pos;
		}
		pos = 0;
		++count;
	}
	return ('0');
}

//void swap(char *p)

void	girar(char *p)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		p[i] = p[i + 8 + 4];
		p[i + 4] = p[i + 8];
	++i;
	}
}

char	verificar_colup_rowleft(char *p)
{
	char	c;

	c = test(p);
	if (c == '1')
	{
		return ('1');
	}
	p = p + 8;
	c = test(p);
	if (c == '1')
	{
		return ('1');
	}
	else
	{
		return ('0');
	}
}
