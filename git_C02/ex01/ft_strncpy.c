/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgiers <asgiers@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:43:50 by asgiers           #+#    #+#             */
/*   Updated: 2022/12/14 15:47:54 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		(dest[a] = src[a]);
			a++;
	}
	while (a < n)
	{
		(dest[a] = '\0');
			a++;
	}
	return (dest);
}
