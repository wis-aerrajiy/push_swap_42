/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:17:03 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 20:26:28 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_down(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (ft_lstsize(*stack) <= 1)
		return ;
	temp = *stack;
	last = ft_lstlast(*stack);
	while (temp->next->next)
		temp = temp->next;
	last->next = (*stack);
	(*stack) = last;
	temp->next = NULL;
}

void	rotate_down_a(t_stack **a)
{
	rotate_down(a);
	ft_putstr("rra\n");
}

void	rotate_down_b(t_stack **b)
{
	rotate_down(b);
	ft_putstr("rrb\n");
}

void	rotate_down_ab(t_stack **a, t_stack **b)
{
	rotate_down_a(a);
	rotate_down_b(b);
	ft_putstr("rrr\n");
}
