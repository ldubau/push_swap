#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct Node
{
	int			data;
	struct Node	*next;
} Node;

int		ft_atoi(const char *str);
Node	*createNode(int value);
void	pushfront(Node **head, int	value);
void	pushback(Node **head, int value);
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

#endif
