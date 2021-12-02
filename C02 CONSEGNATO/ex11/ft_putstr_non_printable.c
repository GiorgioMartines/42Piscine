/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:22:30 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/01 17:37:32 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(char c, char *b)
{
	ft_putchar(b[c / 16]);
	ft_putchar(b[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 || *(str + i) == 127)
		{
			ft_putchar('\\');
			ft_put_hex(*(str + i), "0123456789abcdef");
		}
		else
			ft_putchar(*(str + i));
		i++;
	}
}
