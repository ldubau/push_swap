/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_list_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:14:30 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/26 18:58:33 by leonpouet        ###   ########.fr       */
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
	newNode->next = NULL;
	return (newNode);
}

void	pushfront(Node **head, int	value)
{
	Node	*newNode;

	newNode = createNode(value);
	if (!newNode)
		return;
	newNode->next = *head;
	*head = newNode;
}

void pushback(Node **head, int value)
{
	Node	*newNode;
	Node	*tmp;

	newNode = createNode(value);
	tmp = *head;
	if(head == NULL)
	{
		*head = newNode;
		return;
	}
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newNode;
}
#include <stdio.h>

void	printlist(Node *head)
{
	while(head != NULL)
	{
		printf("%d -> ", head->data);          //Mettre ft_printf
		head = head->next;
	}
	printf("NULL\n");
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
