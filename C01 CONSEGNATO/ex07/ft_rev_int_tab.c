/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:15:57 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/28 19:44:47 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*c;
	int	*d;
	int	cont;

	c = tab;
	d = tab + size - 1;
	cont = 0;
	while (cont < size / 2)
	{
		ft_swap(c, d);
		c++;
		d--;
		cont++;
	}
}
