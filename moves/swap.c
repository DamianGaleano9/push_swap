/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:09:05 by dmazo-ga          #+#    #+#             */
/*   Updated: 2025/01/31 16:02:28 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*tmp;
	
	if(!stack || (*stack)->next == NULL)
			return ;
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
}

void	move_sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	move_sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	move_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}