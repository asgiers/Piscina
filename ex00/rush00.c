/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cexposit <cexposit@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:30:10 by cexposit          #+#    #+#             */
/*   Updated: 2022/11/27 18:11:23 by Guillem L        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/* Prints side column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_side_col(int y, int h)
{
	if (y == 0 || y == h - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('|');
	}
}	

/* Prints middle column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_central_col(int y, int h)
{
	if (y == 0 || y == h - 1)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

// Draws a rectangle on the screen using o, - and | characters, filled 
// with spaces (' '). It will be w characters wide and h characters tall. 
void	rush(int w, int h)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (w < 1 || h < 1)
		return ;
	while (y < h)
	{
		if (x == 0 || x == w - 1)
			putchar_side_col(y, h);
		else
			putchar_central_col(y, h);
		if (x == w - 1)
		{
			ft_putchar('\n');
			x = 0;
			y++;
		}
		else
			x++;
	}
}
