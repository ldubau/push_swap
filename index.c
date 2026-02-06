/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:49:23 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:05:45 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chained_list_size(t_stack **head)
{
	t_stack	*tmp;
	int		i;

	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i ++;
	}
	return (i);
}

int	*array_build(t_stack **head, int size)
{
	t_stack	*tmp;
	int		*arr;
	int		i;

	tmp = *head;
	i = 0;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (tmp != NULL)
	{
		arr[i] = tmp->data;
		tmp = tmp->next;
		i ++;
	}
	return (arr);
}

void	array_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	check;
	int	tmp;

	check = 0;
	while (check == 0)
	{
		i = 0;
		j = 1;
		check = 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				check = 0;
			}
			i ++;
			j ++;
		}
	}
}

void	index_chained_list(t_stack **head)
{
	int		size;
	int		*arr;
	t_stack	*tmp;
	int		i;

	size = chained_list_size(head);
	i = 0;
	arr = array_build(head, size);
	if (!arr)
		return ;
	array_sort(arr, size);
	while (i < size)
	{
		tmp = *head;
		while (arr[i] != tmp->data)
			tmp = tmp->next;
		tmp->index = i;
		i ++;
	}
	free(arr);
}
