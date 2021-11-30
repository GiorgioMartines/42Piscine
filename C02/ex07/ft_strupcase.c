/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:32:23 by gimartin          #+#    #+#             */
/*   Updated: 2021/11/29 16:38:49 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		if(*(str + cont) >= 97  && *(str + cont) <= 122)
		{
			*(str + cont) = *(str + cont) - 32;
		}
		cont++;
	}
	return (str);
}

int main(){
	char a[] = "1CiaO";
	ft_strupcase(a);
printf("%s\n", a);
return 0;
}
