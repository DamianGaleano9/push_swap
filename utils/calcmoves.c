/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <marvin@student.42.fr>              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:30:24 by dmazo-ga            #+#    #+#           */
/*   Updated: 2025/02/11 11:30:24 by dmazo-ga           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getplaceb(t_stack *stack_b, int value_push)
{
	int	i;
	t_stack *tmp;

	int = 1;
	if (value_push > stack_b->value
		&& value_push < getlaststack(stack_b)->value)
		i = 0;
	else if (value_push > getmaxvalue(stack_b)
		|| value_push < getminvalue(stack_b))
		i = finddest(stack_b, getmaxvalue(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->value < value_push || tmp->value > value_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	getplacea(t_stack *stack_a, int value_push)
{
	int	i;
	t_stack *tmp;

	int = 1;
	if (value_push > stack_a->value
		&& value_push < getlaststack(stack_a)->value)
		i = 0;
	else if (value_push > getmaxvalue(stack_a)
		|| value_push < getminvalue(stack_a))
		i = finddest(stack_a, getmaxvalue(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->value < value_push || tmp->value > value_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}