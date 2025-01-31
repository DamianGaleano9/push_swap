/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:09:14 by dmazo-ga          #+#    #+#             */
/*   Updated: 2025/01/31 16:24:59 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;

	tmp = *stack;
	tmp2 = *stack;
	while (tmp2->next)
	{
		tmp3 = tmp2;
		tmp2 = tmp2->next;
	}
	*stack = tmp2;
	tmp2->next = tmp;
	tmp3->next = NULL;
}

void	move_rra(t_stack **a)
{
		rev_rotate(a);
		ft_printf("rra\n");
}

void	move_rrb(t_stack **b)
{
	rev_rotate(b);
	ft_printf("rrb\n");
}

void	move_rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_printf("rrr\n");
}