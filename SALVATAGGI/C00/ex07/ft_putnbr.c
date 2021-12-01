/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:12:55 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/25 20:25:26 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb <= 9)
	{
		ft_putchar (nb % 10 + '0');
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putchar (nb % 10 + '0');
	}
}
