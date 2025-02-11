/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkrotations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:49:56 by marvin            #+#    #+#             */
/*   Updated: 2025/02/11 17:49:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	chk_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;
	
	i = getplaceb(b, c);
	if (i < finddest(a, c))
		i = finddest(a, c);
	return (i);
}

int	chk_rrarrb(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if(getplaceb(b, c))
		i = getstacksize(b) - getplaceb(b, c);
	if ((i < (getstacksize(a) - finddest(a, c))) && finddest(a, c))
		i =  getstacksize(a) - finddest(a, c);
	return (i);
}
int	chk_rrarb(t_stack *a, t_stack *b, int c)
	
{
	int	i;
	
	i = 0;

	if (finddest(a, c))
		i =  getstacksize(a) - finddest(a, c);
		i = getplaceb(b, c) + i;
	return (i);
}

int	chk_rarrb(t_stack *a, t_stack *b, int c)
	
{
	int	i;
	
	i = 0;

	if (getplaceb(b, c))
		i =  getstacksize(b) - finddest(b, c);
		i = getplaceb(a, c) + i;
	return (i);
}