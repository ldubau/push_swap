/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_list_build.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 10:15:09 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/30 11:06:26 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**build_by_string(int ac, char **av)
{
	int		i;
	char	**tbl;

	i = 0;
	tbl = calloc(sizeof(char*), ac);
	if (!tbl)
		return (NULL);
	while(i + 1 < ac)
	{
		tbl[i] = ft_strdup(av[i + 1]);
		if (!tbl[i])
		{
			free_all(tbl);
			return (NULL);
		}
		i ++;
	}
	return (tbl);
}

char	**chained_list_build(Node **head_a, int ac, char **av)
{
	int	i;
	char	**tbl;

	i = 0;
	tbl = NULL;
	if (ac > 2)
		tbl = build_by_string(ac, av);
	else if (ac == 2)
		tbl = ft_split(av[1], ' ');
	if (!tbl)
		return (NULL);
	while (tbl[i])
		if (!pushback(head_a, ft_atoi(tbl[i++])))
		{
			free_all(tbl);
			freelist(*head_a);
			return (NULL);
		}
	return (tbl);
}
