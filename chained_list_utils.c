/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_list_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:14:30 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:05:26 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_t_stack(int value)
{
	t_stack	*newt_stack;

	newt_stack = malloc(sizeof(t_stack));
	if (newt_stack == NULL)
		return (NULL);
	newt_stack->data = value;
	newt_stack->index = 0;
	newt_stack->next = NULL;
	return (newt_stack);
}

bool	pushfront(t_stack **head, int value)
{
	t_stack	*newt_stack;

	newt_stack = create_t_stack(value);
	if (!newt_stack)
		return (false);
	newt_stack->next = *head;
	*head = newt_stack;
	return (true);
}

bool	pushback(t_stack **head, int value)
{
	t_stack	*newt_stack;
	t_stack	*tmp;

	newt_stack = create_t_stack(value);
	if (!newt_stack)
		return (false);
	tmp = *head;
	if (*head == NULL)
	{
		*head = newt_stack;
		return (true);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newt_stack;
	return (true);
}

void	freelist(t_stack *head)
{
	t_stack	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
