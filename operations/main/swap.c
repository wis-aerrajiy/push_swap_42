/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:14:59 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 20:26:36 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (ft_lstsize(*stack) >= 2)
	{
		tmp = (*stack);
		(*stack) = (*stack)->next;
		tmp->next = (*stack)->next;
		(*stack)->next = tmp;
	}
}

void	swap_a(t_stack **a)
{
	swap(a);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **b)
{
	swap(b);
	ft_putstr("sb\n");
}
