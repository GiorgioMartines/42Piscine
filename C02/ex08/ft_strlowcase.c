/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:32:23 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/29 16:42:13 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		if(*(str + cont) >= 65  && *(str + cont) <= 90)
		{
			*(str + cont) = *(str + cont) + 32;
		}
		cont++;
	}
	return (str);
}

int main(){
	char a[] = "1CiaO";
	ft_strlowcase(a);
printf("%s\n", a);
return 0;
}
