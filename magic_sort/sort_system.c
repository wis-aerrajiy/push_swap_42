/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_system.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:41:54 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 00:09:55 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	system_sort(t_stack **a, t_stack **b, t_stack **k)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 3)
		small_sort(a);
	else if (size <= 50)
		easy_sort(a, b);
	else if (size > 50 && size <= 110)
		pro_max_sort(a, b, k, 4);
	else
		pro_max_sort(a, b, k, 9);
}
