/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:59:24 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/02 17:08:18 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dimension(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	char	u1;
	char	u2;

	while (n-- > 0)
	{
		u1 = *s1++;
		u2 = *s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	if (dimension(str) < dimension(to_find))
		return ("(null)");
	if (to_find[i] == 0)
		return (str);
	while (str[j] != 0)
	{
		while (to_find[i] != 0)
		{
			flag = ft_strncmp(&str[j], &to_find[i], dimension(to_find));
			if (flag == 0)
				return (&str[j]);
			i++;
		}
		i = 0;
		j++;
	}
	return ("(null)");
}
