/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:06:33 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/29 12:03:31 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		if (*(str + cont) < 'A')
		{
			return (0);
		}
		if (*(str + cont) > 'Z' && *(str + cont) < 'a')
		{
			return (0);
		}
		if (*(str + cont) > 'z')
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
