/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:15:33 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/01 15:53:28 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
			*(dest + i) = *(src + i);
			i++;
	}
	if (*(dest + i) != 0)
	{
		*(dest + i) = 0;
	}
	while (src[i] != 0)
		i++;
	return (i);
}
