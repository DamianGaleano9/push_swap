/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:09:08 by dmazo-ga          #+#    #+#             */
/*   Updated: 2025/01/31 16:41:35 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_stack **stack)
{
		t_stack	*tmp;
		t_stack	*tmp2;

		tmp = *stack;
		*stack = (*stack)->next;
		tmp2 = *stack;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
		tmp->next = NULL;
}

void	move_ra(t_stack **a)
{
		rotate(a);
		ft_printf("ra\n");
}

void	move_rb(t_stack **b)
{
		rotate(b);
		ft_printf("rb\n");
}

void	move_rr(t_stack **a, t_stack **b)
{
		rotate(a);
		rotate(b);
		ft_printf("rr\n");
}