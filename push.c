/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:11:57 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:06:45 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **head_from, t_stack **head_to)
{
	t_stack	*tmp;

	if (*head_from == NULL)
		return ;
	tmp = *head_from;
	*head_from = (*head_from)->next;
	tmp->next = *head_to;
	*head_to = tmp;
}

void	pa(t_stack **head_a, t_stack **head_b)
{
	push(head_b, head_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **head_a, t_stack **head_b)
{
	push(head_a, head_b);
	write(1, "pb\n", 3);
}
