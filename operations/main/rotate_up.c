/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:50:15 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 20:26:32 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// rotate up

void	rotate_up(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (ft_lstsize(*stack) <= 1)
		return ;
	tmp = *stack;
	last = ft_lstlast(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
}

void	rotate_up_a(t_stack **a)
{
	rotate_up(a);
	ft_putstr("ra\n");
}

void	rotate_up_b(t_stack **b)
{
	rotate_up(b);
	ft_putstr("rb\n");
}

void	rotate_up_ab(t_stack **a, t_stack **b)
{
	rotate_up_a(a);
	rotate_up_b(b);
	ft_putstr("rr\n");
}
