/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:59:24 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/01 12:41:55 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int find(char *str, char *to_find)
{
	int	flag;

	flag = 0;
	while(str != 0)
	{
		
	}
	return (flag);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[j] != 0)
	{
		while (to_find[i] != 0)
		{
			if (flag ==0	&& to_find[i] == str[j])
			{
				flag = 0;
				j++;
			}
			else
			{
				flag = 1;
				j++;
				i++;
			}
		}
		if(flag)
			return (to_find);
		i = 0;
		j++;
	}
	return (NULL);
}


int main(){
	char a[40] = "iwa";
	char b[50] = "Crdgdia";
	printf("%s\n", ft_strstr(b,a));
	return 0;
}
