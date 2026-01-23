/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:44:39 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/22 11:09:15 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"


void	chained_list_build(Node **head_a, int ac, char **av)
{
	int	i;
	char	**tbl;

	if (ac > 2)
	{
		i = 1;
		while(i < ac)
			pushfront(head_a, atoi(av[i++]));
	}
	else if (ac == 2)
	{
		i = 0;
		tbl = ft_split(av[1], ' ');
		while (tbl[i])
		{
			pushfront(head_a, atoi(tbl[i]));
			free(tbl[i++]);
		}
		free(tbl);
	}
}

#include <stdio.h>

int main(int ac, char **av)
{
	Node	*head_a;
	Node	*head_b;

	head_a = NULL;
	head_b = NULL;
	chained_list_build(&head_a, ac, av);
	reverse_rotate(&head_a);
	reverse_rotate(&head_a);
	rotate(&head_a);
	rotate(&head_a);
	printlist(head_a);
	printlist(head_b);
	freelist(head_a);
	return 0;
}
