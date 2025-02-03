/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:47:27 by dmazo-ga          #+#    #+#             */
/*   Updated: 2025/02/03 13:54:46 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **a, t_stack **b, int stacksize)
{
	int	i;

	if (stacksize == 2)
		move_sa(a);
	else if (stacksize == 3)
		minisort(a);
	else
	{
		sorttob(a, b);
		sorttoa(a, b);
		i = finddest(*a, getminvalue(*a));
		if (i < getstacksize(*a) - i)
		{
			while((*a)->value != getminvalue(*a))
				move_ra(a);
		}
		else
		{
			while ((*a)->value != getminvalue(*a))
				move_rra(a);
		}
	}
}