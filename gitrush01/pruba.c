/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruba.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esolsona <esolsona@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:07:22 by esolsona          #+#    #+#             */
/*   Updated: 2022/12/04 21:35:05 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

char	**matrix(void)
{
	char	*p;
	char	**mat;
	int		line;
	int		col;

	p = malloc(16 * sizeof(char));
	line = 0;
	col = 0;
	while (line < 4)
	{
		mat[line] = &p[col];
		col = col + 4;
		++line;
	}
	line = 0;
	col = 0;
	while (line < 4)
	{
		while (col < 4)
		{
			mat[line][col] = '0';
			++col;
		}
		col = 0;
		++line;
	}
	return (mat);
}

void	print_mat(char **mat)
{
	int	line;
	int	col;

	line = 0;
	col = 0;
	while (line < 4)
	{
		while (col < 4)
		{	
			write(1, &mat[line][col], 1);
			write(1, " ", 1);
			++col;
		}
		write(1, "\n", 1);
		col = 0;
		++line;
	}
}

void	ft_comprobar(char comprobar)
{
	if (comprobar == '1')
	{
		write(1, "Error\n", 6);
	}
}

void	girar(char *p);
int		char_int(char c);
char	verificar_colup_rowleft(char *p);
void	set_max_min(char *p, char **mat);

int	main(int argc, char **argv)
{
	int		count;
	int		tmp;
	char	*p;
	char	**mat;
	char	comprobar;

	if (argc == 1)
	{
		write(1, "\nNo has entrado ningun parametro\n\n", 34);
	}
	p = malloc(16 * sizeof(char));
	if (p == NULL)
	{
		write(1, "No hau espacio en memoria", 25);
	}
	count = 0;
	tmp = 0;
	while (tmp < 32)
	{
		if (tmp % 2 != 1)
		{
			p[count] = argv[1][tmp];
			++count;
		}
		++tmp;
	}
	printf("\n");
	tmp = 0;
	while (tmp < 16)
	{
		write(1, &p[tmp], 1);
		++tmp;
	}
	write(1, "\n\n", 2);
	mat = matrix();
	ft_comprobar(verificar_colup_rowleft(p));
	set_max_min(p, mat);
	print_mat(mat);
	girar(p);
	count = 0;
	tmp = 0;
	while (tmp < 16)
	{
		write(1, &p[tmp], 1);
		++tmp;
	}
}
