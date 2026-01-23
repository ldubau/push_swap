/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:06:35 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/23 11:22:00 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_no_double(char **tbl)
{
	int	i;
	int	j;

	i = 0;
	while (tbl[i])
	{
		j = i + 1;
		while (tbl[j])
		{
			if (atoi(tbl[i]) == atoi(tbl[j]))
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}

int	check_error(int ac, char **av)
{
	int		i;
	char	**tbl = NULL;

	i = 0;
	if (ac == 2)
		tbl = ft_split(av[1], ' ');
	else if(ac > 2)
	{
		tbl = calloc(sizeof(char*), ac);
		while (i < ac)
		{
			tbl[i] = av[i + 1];
			i ++;
		}
	}
	if (check_no_double(tbl) == 0)
		return (0);
	return (1);
}
