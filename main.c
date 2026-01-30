/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:44:39 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/30 06:44:11 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)   // faire les petit cas
{
	Node	*head_a;
	Node	*head_b;
	char 	**tbl;

	head_a = NULL;
	head_b = NULL;
	if (ac < 2)
		return (0);
	tbl = chained_list_build(&head_a, ac, av);
	if (!tbl)
		return (0);
	if (check_error(tbl) == 0)
	{
		freelist(head_a);
		return (0);
	}
	index_chained_list(&head_a);
	printlist(head_a);
	printf("\n");
	radix_sort(&head_a, &head_b);
	printlist(head_a);
	freelist(head_a);
	free_all(tbl);
	return 0;
}
