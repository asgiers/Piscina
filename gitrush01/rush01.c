/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgiers <asgiers@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:40:55 by asgiers           #+#    #+#             */
/*   Updated: 2022/12/04 21:24:27 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	**inicializar(void)
{
	int	i;
	int	j;
	int	size;
	int	len;
	int	*ptr;
	int	**arr;

	size = 4;
	i = 0;
	j = 0;
	len = sizeof (int *) * size + sizeof(int) * size * size;
	arr = (int **)malloc(len);
	ptr = (int *)(arr + size);
	while (i < size)
	{
		arr[i] = (ptr + size * i);
		++i;
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			arr[i][j] = 0;
			++j;
		}
		j = 0;
		++i;
	}
	return (arr);
}

void	print_matrix(int size, int **arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			printf("%d ", arr[i][j]);
			++j;
		}
		++i;
		j = 0;
	}
}

int	main(void)
{
	int	**p;
	int	size;

	size = 4;
	p = inicializar();
	print_matrix(size, p);
	return (0);
}
