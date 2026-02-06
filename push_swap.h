/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:02:46 by leonpouet         #+#    #+#             */
/*   Updated: 2026/02/06 15:10:03 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include "./Libft-42/libft.h"

typedef struct stack
{
	int				data;
	int				index;
	struct stack	*next;
}	t_stack;

// Chained list utils

t_stack	*createt_stack(int value);
bool	pushfront(t_stack **head, int value);
bool	pushback(t_stack **head, int value);
void	printlist(t_stack *head);
void	freelist(t_stack *head);
void	swap(t_stack **head);
void	push(t_stack **head_from, t_stack **head_to);
void	rotate(t_stack **head);
void	reverse_rotate(t_stack **head);

// Instructions

void	sa(t_stack **head);
void	sb(t_stack **head);
void	ss(t_stack **head_a, t_stack **head_b);
void	pa(t_stack **head_a, t_stack **head_b);
void	pb(t_stack **head_a, t_stack **head_b);
void	ra(t_stack **head_a);
void	rb(t_stack **head_b);
void	rr(t_stack **head_a, t_stack **head_b);
void	rra(t_stack **head_a);
void	rrb(t_stack **head_b);
void	rrr(t_stack **head_a, t_stack **head_b);

// Error check

void	free_all(char **tbl);
int		check_error(char **tbl);

// Sorting

void	sorting(t_stack **head_a, t_stack **head_b);
void	sort_three(t_stack **head_a);
void	sort_five(t_stack **head_a, t_stack **head_b, int size);
int		is_list_sorted(t_stack **head);

//	Tools

int		chained_list_size(t_stack **head);
void	index_chained_list(t_stack **head);
char	**chained_list_build(t_stack **head_a, int ac, char **av);

#endif
