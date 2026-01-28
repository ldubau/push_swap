/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:06:35 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/28 17:32:32 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(char **tbl)
{
	int	i;

	i = 0;
	while (tbl[i])
	{
		free(tbl[i]);
		tbl[i] = NULL;
		i ++;
	}
	free(tbl);
	tbl = NULL;
}

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
			if (ft_atoi(tbl[i]) == ft_atoi(tbl[j]))
			{
				printf("the number (%s) appears multiple times\n", tbl[i]);  // mettre error
				return (0);
			}
			j ++;
		}
		i ++;
	}
	return (1);
}

int	check_number(char **tbl)
{
	int	i;
	int	j;

	i = 0;
	while (tbl[i])
	{
		j = 0;
		while (tbl[i][j])
		{
			if(ft_isdigit(tbl[i][j]) == 0 && tbl[i][0] != '-')
			{
				printf("(%s) is not a number\n", tbl[i]);  // mettre error
				return (0);
			}
			j ++;
		}
		i ++;
	}
	return (1);
}

int	check_error(char **tbl)
{
	if (check_no_double(tbl) == 0 || check_number(tbl) == 0)
	{
		free_all(tbl);
		return (0);
	}
	return (1);
}
