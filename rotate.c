/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:31:02 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:07:08 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return ;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	*head = (*head)->next;
	tmp->next->next = NULL;
}

void	ra(t_stack **head_a)
{
	rotate(head_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **head_b)
{
	rotate(head_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **head_a, t_stack **head_b)
{
	rotate(head_a);
	rotate(head_b);
	write(1, "rr\n", 3);
}
