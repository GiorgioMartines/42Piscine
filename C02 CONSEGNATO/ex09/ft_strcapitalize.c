/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:43:02 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/30 19:25:56 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	bol(char str)
{
	if (str >= 48 && str <= 57)
		return (0);
	if (str >= 'A' && str <= 'Z')
		return (0);
	if (str >= 'a' && str <= 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (bol(str[i]) && !bol(str[i + 1]))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	if ((str[0] >= 97 && str[0] <= 122))
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
