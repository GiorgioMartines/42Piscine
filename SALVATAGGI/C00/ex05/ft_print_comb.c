/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:44:24 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/25 19:26:03 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	while (comb[0] < '9')
	{
		comb[1] = comb [0] + 1;
		while (comb[1] < '9')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				write(1, &comb, 3);
				if (comb[0] == '7')
				{
					return ;
				}
				write(1, ",", 1);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
