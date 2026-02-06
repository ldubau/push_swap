/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:06:35 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 12:24:05 by leonpouet        ###   ########.fr       */
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

bool	check_no_double(char **tbl)
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
				return (false);
			j ++;
		}
		i ++;
	}
	return (true);
}

bool	check_number(char **tbl)
{
	int	i;
	int	j;

	i = 0;
	while (tbl[i])
	{
		j = 0;
		while (tbl[i][j])
		{
			if(ft_isdigit(tbl[i][j]) == 1 ||
			((tbl[i][j] == '-'|| tbl[i][j] == '+') && j == 0 && tbl[i][j + 1]))
				j ++;
			else
				return (false);
		}
		i ++;
	}
	return (true);
}

bool	check_size(char **tbl)
{
	int		i;
	int		j;
	int		sign;
	long	nbr;

	i = 0;
	while (tbl[i])
	{
		j = 0;
		sign = 1;
		nbr = 0;
		if (tbl[i][j] == '-')
		{
			sign *= -1;
			j++;
		}
		while(tbl[i][j])
		{
			nbr = nbr * 10 + (tbl[i][j++] - '0');
			if ((sign == 1 && nbr > INT_MAX) || (sign == -1 && nbr * sign < INT_MIN))
				return (false);
		}
		i ++;
	}
	return (true);
}

int	check_error(char **tbl)
{
	if (!check_number(tbl) || !check_no_double(tbl) || !check_size(tbl))
	{
		write(1, "Error\n", 6);
		free_all(tbl);
		return (0);
	}
	return (1);
}
