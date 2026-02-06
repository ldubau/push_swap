/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:01:20 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:06:55 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return ;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	*head = tmp;
	while (tmp->next != *head)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	rra(t_stack **head_a)
{
	reverse_rotate(head_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **head_b)
{
	reverse_rotate(head_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **head_a, t_stack **head_b)
{
	reverse_rotate(head_a);
	reverse_rotate(head_b);
	write(1, "rrr\n", 4);
}
