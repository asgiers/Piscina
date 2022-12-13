/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgiers <asgiers@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:48:51 by asgiers           #+#    #+#             */
/*   Updated: 2022/12/02 12:07:48 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(int x1, int x2)
{
	char	y1;
	char	y2;

	y1 = (x1 - (x1 % 10)) / 10 + '0';
	y2 = x1 % 10 + '0';
	ft_putchar(y1);
	ft_putchar(y2);
	ft_putchar(' ');
	y1 = (x2 - (x2 % 10)) / 10 + '0';
	y2 = x2 % 10 + '0';
	ft_putchar(y1);
	ft_putchar(y2);
	if (!(x1 == 98 && x2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x1;
	int	x2;

	x1 = 0;
	x2 = 0;
	while (1)
	{
		while (++x2 <= 99)
			ft_putcomb(x1, x2);
		x1++;
		x2 = x1;
		if (x1 == 99)
			return ;
	}
}
