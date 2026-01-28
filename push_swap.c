/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:40:40 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/28 17:05:46 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_list_sorted(Node **head, int	size)
{
	Node	*tmp;
	int		i;

	tmp = *head;
	i = 0;
	while(tmp->next != NULL)
	{
		if(tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
		i ++;
	}
	if (size != i + 1)
		return (0);
	return (1);
}

void radix_sort(Node **head_a, Node **head_b)
{
	int	size;
	int	i;
	int	j;

	size = chained_list_size(head_a);
	i = 0;
	while(is_list_sorted(head_a, size) == 0)
	{
		j = 0;
		while(j < size)
		{
			if ((((*head_a)->index >> i) & 1) == 0)
				pb(head_a, head_b);
			else
				ra(head_a);
			j ++;
		}
		while(*head_b != NULL)
			pa(head_a, head_b);
		i ++;
	}
}
