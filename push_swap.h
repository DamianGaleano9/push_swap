/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:17:47 by dmazo-ga          #+#    #+#             */
/*   Updated: 2025/01/31 13:19:23 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				dest;
	struct s_stack	*next;
}	t_stack;

void			push_swap(t_stack **a, t_stack **b, int stacksize);

//INPUTCHECK
int				checkrepeat(t_stack *a);
int				checknums(char *str);
t_stack			*inputcheck(int inpcount, char **input);
long long int	*atoiplus(const char *str, long long int *result);

//STACKMAKER
t_stack			*createslot(long long int *value, t_stack **stack);
void			removestack(t_stack **stack);
void			removesplit(char **split);
t_stack			*makestack(char *inp);
t_stack			*makestackmultiarg(int inpcount, char **input);

//MOVES - SWAP
void			move_sa(t_stack **stack_a);
void			move_sb(t_stack **stack_b);
void			move_ss(t_stack **stack_a, t_stack **stack_b);
//MOVES - PUSH
void			move_pa(t_stack **a, t_stack **b);
void			move_pb(t_stack **a, t_stack **b);
//MOVES - ROTATE
void			move_ra(t_stack **a);
void			move_rb(t_stack **b);
void			move_rr(t_stack **a, t_stack **b);
//MOVES - REVERSE ROTATE
void			move_rra(t_stack **a);
void			move_rrb(t_stack **b);
void			move_rrr(t_stack **a, t_stack **b);
//CALCMOVES
int				getplaceb(t_stack *stack_b, int value_push);
int				getplacea(t_stack *stack_a, int value_push);

//CHECKROTATIONS
int				chk_rarb(t_stack *a, t_stack *b, int c);
int				chk_rrarrb(t_stack *a, t_stack *b, int c);
int				chk_rrarb(t_stack *a, t_stack *b, int c);
int				chk_rarrb(t_stack *a, t_stack *b, int c);

//MULTIROTATOR
int				rot_rarb(t_stack **a, t_stack **b, int c, char s);
int				rot_rrarrb(t_stack **a, t_stack **b, int c, char s);
int				rot_rrarb(t_stack **a, t_stack **b, int c, char s);
int				rot_rarrb(t_stack **a, t_stack **b, int c, char s);

//ROTATE
int				rotate_ba(t_stack *a, t_stack *b);
int				rotate_ab(t_stack *a, t_stack *b);

//UTILS: 
int				getstacksize(t_stack *stack);
t_stack			*getlaststack(t_stack *stack);
int				getminvalue(t_stack *a);
int				getmaxvalue(t_stack *a);
int				finddest(t_stack *a, int value);

//SORT
int				checksorted(t_stack *stack);
void			minisort(t_stack **stack);
void			sort(t_stack **stack_a, t_stack **stack_b);
void			sorttob(t_stack **stack_a, t_stack **stack_b);
void			sorttoa(t_stack **stack_a, t_stack **stack_b);

#endif