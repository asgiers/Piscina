/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgiers <asgiers@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:00:48 by asgiers           #+#    #+#             */
/*   Updated: 2022/12/15 16:58:40 by asgiers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (up && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (! up && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			up = 0;
		}
		else
			up = 1;
			i++;
	}
	return (str);
}
