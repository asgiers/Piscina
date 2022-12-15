

void	ft_putchar(char c);

/* Prints 1st column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_first_col(int y, int h)
{
	if (y == 0 || y == h - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}	

/* Prints last column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_last_col(int y, int h)
{
	if (y == 0 || y == h - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

/* Prints middle column characters
 * y: vertical position of the character
 * h: total height of the rectangle
 */
void	putchar_central_col(int y, int h)
{
	if (y == 0 || y == h - 1)
		ft_putchar('B');
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
