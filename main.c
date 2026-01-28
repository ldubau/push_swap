/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:44:39 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/28 17:05:55 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**chained_list_build(Node **head_a, int ac, char **av)
{
	int	i;
	char	**tbl;

	i = 0;
	tbl = NULL;
	if (ac > 2)
	{
		tbl = calloc(sizeof(char*), ac);
		while(i + 1 < ac)
		{
			tbl[i] = ft_strdup(av[i + 1]);
			i ++;
		}
		i = 0;
	}
	else if (ac == 2)
		tbl = ft_split(av[1], ' ');
	while (tbl[i])
		pushfront(head_a, ft_atoi(tbl[i++]));
	return (tbl);
}

int main(int ac, char **av)
{
	Node	*head_a;
	Node	*head_b;
	char **tbl;

	head_a = NULL;
	head_b = NULL;
	tbl = chained_list_build(&head_a, ac, av);
	if (!tbl)
		return (0);
	if (check_error(tbl) == 0)
	{
		freelist(head_a);
		return (0);
	}
	index_chained_list(&head_a);
	radix_sort(&head_a, &head_b);
	printlist(head_a);
	freelist(head_a);
	free_all(tbl);
	return 0;
}



// int *arr = array_build(&head_a);
// 	Node *tmp = head_a;
// 	int i = 0;
// 	while (tmp)
// 	{
// 	printf("%d -> ", arr[i]);
// 	tmp = tmp->next;
// 	i ++;
// 	}
