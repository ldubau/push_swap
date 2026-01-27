/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:49:23 by leonpouet         #+#    #+#             */
/*   Updated: 2026/01/26 18:50:18 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*array_build(Node **head)
{
	Node	*tmp;
	int		*arr;
	int		i;

	tmp = *head;
	i = 0;
	while (tmp == NULL)
	{
		tmp = tmp->next;
		i ++;
	}
	arr = malloc(sizeof(int) * i);
	if (!arr)
	{
		free(arr);
		return (0);
	}
	tmp = *head;
	i = 0;
	while (tmp == NULL)
	{
		arr[i] = tmp->data;
		i ++;
	}
	return (arr);
}

// int	*array_sort(int *arr)
// {

// }


