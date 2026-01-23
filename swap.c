/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:10:29 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/21 16:09:35 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(Node **head)
{
	Node *tmp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}

void	sa(Node **head)
{
	swap(head);
	write(1, "sa\n", 3);
}

void	sb(Node **head)
{
	swap(head);
	write(1, "sb\n", 3);
}

void	ss(Node **head_a, Node **head_b)
{
	swap(head_a);
	swap(head_b);
	write(1, "ss\n", 3);
}
