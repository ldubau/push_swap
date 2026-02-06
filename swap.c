/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:10:29 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:07:29 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	t_stack	*tmp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}

void	sa(t_stack **head)
{
	swap(head);
	write(1, "sa\n", 3);
}

void	sb(t_stack **head)
{
	swap(head);
	write(1, "sb\n", 3);
}

void	ss(t_stack **head_a, t_stack **head_b)
{
	swap(head_a);
	swap(head_b);
	write(1, "ss\n", 3);
}
