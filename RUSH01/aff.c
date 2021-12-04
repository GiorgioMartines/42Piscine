/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:58:43 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/04 09:59:59 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_rush01_aff(int ***table, int size)
{
	int		i;
	int		j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			ft_putchar(table[0][i][j] + '0');
			if (j != size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

