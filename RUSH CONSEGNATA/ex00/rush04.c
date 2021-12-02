/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:00:34 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/27 11:39:38 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	prima(int x)
{
	int	cont;

	cont = 1;
	ft_putchar('A');
	while (cont < x - 1)
	{
		ft_putchar('B');
		cont++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	seconda(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < y - 1)
	{
		ft_putchar('B');
		while (j < x - 1)
		{
			ft_putchar(' ');
			j++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}

void	ultima(int x)
{
	int	cont;

	cont = 1;
	ft_putchar('C');
	while (cont < x - 1)
	{
		ft_putchar('B');
		cont++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	prima(x);
	if (y > 2)
	{
		seconda(x, y);
	}
	if (y > 1)
	{
		ultima(x);
	}	
}
