/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:31:02 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/22 11:10:46 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(Node **head)
{
	Node *tmp;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return ;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	*head = (*head)->next;
	tmp->next->next = NULL;
}

void	ra(Node **head_a)
{
	rotate(head_a);
	write(1, "ra\n", 3);
}

void	rb(Node **head_b)
{
	rotate(head_b);
	write(1, "rb\n", 3);
}

void	rr(Node **head_a, Node **head_b)
{
	rotate(head_a);
	rotate(head_b);
	write(1, "rr\n", 3);
}
