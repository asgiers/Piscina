/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guillem L <glajara-@student.42barcel>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:13:09 by Guillem L         #+#    #+#             */
/*   Updated: 2022/11/27 15:27:20 by Guillem L        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/* Prints 1st column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_first_col(int y, int h)
{
	if (y == 0)
	{
		ft_putchar('/');
	}
	else if (y == h - 1)
		ft_putchar('\\');
	else
	{
		ft_putchar('*');
	}
}	

/* Prints last column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_last_col(int y, int h)
{
	if (y == 0)
	{
		ft_putchar('\\');
	}
	else if (y == h - 1)
		ft_putchar('/');
	else
	{
		ft_putchar('*');
	}
}

/* Prints middle column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_central_col(int y, int h)
{
	if (y == 0 || y == h - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

// Draws a rectangle on the screen using A, B and C characters, filled 
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
		if (x == 0)
			putchar_first_col(y, h);
		else if (x == w - 1)
			putchar_last_col(y, h);
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
