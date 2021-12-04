/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:55:10 by gimartin          #+#    #+#             */
/*   Updated: 2021/12/04 09:59:43 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**args(int argc, char **argv, int *nargs);
void	gen(int **locked, int size);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		**bord;
	int		size;

	bord = args(argc, argv, &size);
	if (bord != NULL)
	{
		gen(bord, size);
	}
	else
		ft_putstr("Error\n");
}

