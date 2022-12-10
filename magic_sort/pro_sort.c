/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:49:24 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 00:11:25 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	easy_sort(t_stack **a, t_stack **b)
{
	int	index;
	int	size;

	while (ft_lstsize(*a) > 3)
	{
		size = ft_lstsize(*a) / 2;
		index = ft_lst_index(*a, ft_lst_min(*a));
		if (is_sorted(*a))
		{
			while (*b)
				push_a(b, a);
			break ;
		}
		if (index == 0)
		{
			push_b(a, b);
		}
		if (index > size)
			rotate_down_a(a);
		else
			rotate_up_a(a);
	}
	small_sort(a);
	while (*b)
		push_a(b, a);
}
