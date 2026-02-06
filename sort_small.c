/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:19:52 by leondubau         #+#    #+#             */
/*   Updated: 2026/02/06 12:01:11 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_min(Node **head, int min)
{
	Node	*tmp;
	int		i;

	tmp = *head;
	i = 0;
	while(tmp->index != min)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	sort_three(Node **head_a)
{
	int	a;
	int	b;
	int	c;

	a = (*head_a)->index;
	b = (*head_a)->next->index;
	c = (*head_a)->next->next->index;
	if (a > b && a > c)
		ra(head_a);
	else if (b > a && b > c)
		rra(head_a);
	if ((b > c && b < a) || (a < b && a < c) || (c > a && c > b))
		sa(head_a);
}

void	sort_five(Node **head_a, Node **head_b, int size)
{
	int	pos_min;
	int	min;

	min = 0;
	while (size - min > 3)
	{
		pos_min = find_pos_min(head_a, min);
		if (pos_min <= (size - min) / 2)
			while ((*head_a)->index != min)
				ra(head_a);
		else
			while ((*head_a)->index != min)
				rra(head_a);
		pb(head_a, head_b);
		min++;
	}
	if (!is_list_sorted(head_a))
		sort_three(head_a);
	while (*head_b)
		pa(head_a, head_b);
}
