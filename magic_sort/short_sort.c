/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:38:31 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 00:28:26 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(t_stack **stack)
{
	int	max;

	max = ft_lst_max(*stack);
	if (is_sorted(*stack))
		return ;
	if ((*stack)->value == max)
		rotate_up_a(stack);
	else if ((*stack)->next->value == max)
		rotate_down_a(stack);
	if ((*stack)->value > (*stack)->next->value)
		swap_a(stack);
}
