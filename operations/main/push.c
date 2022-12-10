/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:19:09 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 20:52:22 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*tmp;

	if (*from)
	{
		tmp = *from;
		*from = (*from)->next;
		tmp->next = *to;
		*to = tmp;
	}
}

void	push_a(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putstr("pa\n");
}

void	push_b(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putstr("pb\n");
}
