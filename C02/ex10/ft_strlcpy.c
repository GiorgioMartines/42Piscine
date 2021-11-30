/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:15:33 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/29 19:22:14 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srclen = strlen(src);
    if (srclen + 1 < size) {
        memcpy(dest, src, srclen + 1);
    } else if (size != 0) {
        memcpy(dest, src, size - 1);
        dest[size-1] = '\0';
    }
    return srclen;
}
