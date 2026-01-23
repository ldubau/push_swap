/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:11:57 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/22 10:03:02 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(Node **head_from, Node **head_to)
{
	Node	*tmp;

	if (*head_from == NULL)
		return ;
	tmp = *head_from;
	*head_from = (*head_from)->next;
	tmp->next = *head_to;
	*head_to = tmp;
}

void	pa(Node **head_a, Node **head_b)
{
	push(head_b, head_a);
	write(1, "pa\n", 3);
}

void	pb(Node **head_a, Node **head_b)
{
	push(head_a, head_b);
	write(1, "pb\n", 3);
}
