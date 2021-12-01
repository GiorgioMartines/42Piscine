/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:10:17 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/29 13:25:27 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	el;

	i = 0;
	j = 0;
	el = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				el = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = el;
			}
			j++;
		}
		i++;
	}
}
