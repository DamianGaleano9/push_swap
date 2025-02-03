/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:12:36 by dmazo-ga          #+#    #+#             */
/*   Updated: 2025/02/03 14:04:30 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int	inpcount, char	**input)
{
	t_stack	*a;
	t_stack	*b;
	int	stacksize;	
	
	a = inputcheck(inpcount, input);
	b = NULL;
	if (!a)
	{
		ft_print("Error\n");
		return (0);
	}
	stacksize = getstacksize(a);
	if (checksorted(a))
	{
		removestack(&a);
		return (0);
	}
	push_swap(&a, &b, stacksize);
	removestack (&a);
	removestack (&b);
	return (0);
}