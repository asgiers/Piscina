/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orint_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgiers <asgiers@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:09:11 by asgiers           #+#    #+#             */
/*   Updated: 2022/12/05 15:28:52 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putcomb(char comb[22])
{
	ft_putchar(comb[0]);
	ft_putchar(comb[1]);
	ft_putchar(comb[2]);
	if (!(comb[0] == '7' && comb[0] == '8' && comb[1] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(void)
{
	char	comb[3];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '1';
	while (1)
	{
		while (++comb[1] <= '9')
			putcomb(comb);
		if (++comb[0] <= '8')
			comb[1] = comb[0];
		else if (++comb[0] <= '7')
		{
			comb[1] = comb[0] + 1;
			comb[2] = comb[1];
		}
	break;
	}
}
