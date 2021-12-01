/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:39:02 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/29 16:36:00 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = n;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (*(dest + j) != '\0')
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
