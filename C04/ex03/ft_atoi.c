/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:19:36 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/02 09:50:33 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	curr(char *c, int i)
{
	int neg;

	neg = 1;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
	{
		i++;
	}
	if (c[i] == 45)
		neg = -1;
	while (c[i] == 45 || c[i] == 43)
	{
		i++;
	}
	i *= neg;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = curr(str, 0);
	num = 1;
	if (i < 0)
	{
		i *= -1;
		num = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	i--;
	num *= (str[i] - 48);
	return (num);
}

int main(){

	printf("%d\n", ft_atoi("     -+-+-+-+53432asre543"));
	return 0;
}
