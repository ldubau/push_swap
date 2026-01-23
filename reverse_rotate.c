/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:01:20 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/22 11:12:21 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(Node **head)
{
	Node *tmp;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return ;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	*head = tmp;
	while(tmp->next != *head)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	rra(Node **head_a)
{
	reverse_rotate(head_a);
	write(1, "rra\n", 4);
}

void	rrb(Node **head_b)
{
	reverse_rotate(head_b);
	write(1, "rrb\n", 4);
}

void	rrr(Node **head_a, Node **head_b)
{
	reverse_rotate(head_a);
	reverse_rotate(head_b);
	write(1, "rrr\n", 4);
}
