/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:15:33 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/30 15:21:35 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (i < size)
	{
		while ((*src + i) != '\0' && (i < size))
		{
			*(dest + i) = *(src + i);
			l = i;
			i++;
		}
		if (*(dest + i) != '\0' && (i < size))
		{
			*(dest + i) = '\0';
		}
		i++;
	}
	return (l + 1);
}
