#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>
#include "./42-Libft/libft.h"

#include <stdio.h>    // a supprimé

typedef struct Node
{
	int			data;
	int			index;
	struct Node	*next;
} Node;

int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);

Node	*createNode(int value);
bool	pushfront(Node **head, int	value);
bool	pushback(Node **head, int value);
void	printlist(Node *head);
void	freelist(Node *head);
void	swap(Node **head);
void	push(Node **head_from, Node **head_to);
void	rotate(Node **head);
void	reverse_rotate(Node **head);

// fonction demandé

void	sa(Node **head);
void	sb(Node **head);
void	ss(Node **head_a, Node **head_b);
void	pa(Node **head_a, Node **head_b);
void	pb(Node **head_a, Node **head_b);
void	ra(Node **head_a);
void	rb(Node **head_b);
void	rr(Node **head_a, Node **head_b);
void	rra(Node **head_a);
void	rrb(Node **head_b);
void	rrr(Node **head_a, Node **head_b);

// error check

void	free_all(char **tbl);
int		check_error(char **tbl);

int		chained_list_size(Node **head);
void	index_chained_list(Node **head);

char	**chained_list_build(Node **head_a, int ac, char **av);

// sorting

void	sorting(Node **head_a, Node **head_b);
void	sort_three(Node **head_a);
void	sort_five(Node **head_a, Node **head_b, int size);

#endif


// ccw push_swap.a /home/leonpouet/Documents/42-Libft/libft.a
