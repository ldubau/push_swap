/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:40:40 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 12:20:29 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_list_sorted(Node **head)
{
	Node	*tmp;

	tmp = *head;
	while(tmp->next != NULL)
	{
		if(tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}


int	find_pos_max(Node **head, int size)
{
	Node	*tmp;
	int		i;

	tmp = *head;
	i = 0;
	while(tmp->index != size - 1)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	k_sort_second_part(Node **head_a, Node **head_b)
{
	int	size;
	int	pos_max;

	while(*head_b)
	{
		size = chained_list_size(head_b);
		pos_max = find_pos_max(head_b, size);
		if (pos_max <= size / 2)
			while ((*head_b)->index != size - 1)
				rb(head_b);
		else
			while ((*head_b)->index != size - 1)
				rrb(head_b);
		pa(head_a, head_b);
	}
}

void	k_sort(Node **head_a, Node **head_b)
{
	int	treshold;
	int	size;
	int	delta;

	treshold = 0;
	size = chained_list_size(head_a);
	delta = size / 20 + 7;
	while (*head_a)
	{
		if((*head_a)->index <= delta + treshold)
		{
			pb(head_a, head_b);
			if((*head_b)->index <= treshold)
				rb(head_b);
			treshold++;
		}
		else
			ra(head_a);
	}
	k_sort_second_part(head_a, head_b);
}

void	sorting(Node **head_a, Node **head_b)
{
	int	size;

	size = chained_list_size(head_a);
	if (size <= 2 && !is_list_sorted(head_a))
		sa(head_a);
	else if (size <= 3 && !is_list_sorted(head_a))
		sort_three(head_a);
	else if (size <= 5 && !is_list_sorted(head_a))
		sort_five(head_a, head_b, size);
	else if (size > 5 && !is_list_sorted(head_a))
		k_sort(head_a, head_b);
}
