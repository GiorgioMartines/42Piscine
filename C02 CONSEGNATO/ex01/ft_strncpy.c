/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:39:02 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/01 18:05:01 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				cont;
	unsigned int	i;

	cont = 0;
	i = 0;
	while (i < n)
	{
		if (*(src + i) != 0 && cont == 0)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			cont = 1;
			*(dest + i) = 0;
		}
		i++;
	}
	return (dest);
}
