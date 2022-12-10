/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:14:59 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 21:29:11 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap_a_check(t_stack **a)
{
	swap(a);
}

void	swap_b_check(t_stack **b)
{
	swap(b);
}

void	swap_ab_check(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
