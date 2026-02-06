/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_list_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:14:30 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 12:26:07 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Node	*createNode(int value)
{
	Node	*newNode;

	newNode = malloc(sizeof(Node));
	if(newNode == NULL)
		return (NULL);
	newNode->data = value;
	newNode->index = 0;
	newNode->next = NULL;
	return (newNode);
}

bool	pushfront(Node **head, int	value)
{
	Node	*newNode;

	newNode = createNode(value);
	if (!newNode)
		return (false);
	newNode->next = *head;
	*head = newNode;
	return (true);
}

bool	pushback(Node **head, int value)
{
	Node	*newNode;
	Node	*tmp;

	newNode = createNode(value);
	if (!newNode)
		return (false);
	tmp = *head;
	if(*head == NULL)
	{
		*head = newNode;
		return (true);
	}
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newNode;
	return (true);
}

void	freelist(Node *head)
{
	Node	*tmp;
	while(head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
