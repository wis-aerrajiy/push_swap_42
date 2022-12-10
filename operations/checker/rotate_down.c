/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:17:03 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 20:34:31 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_down_a_check(t_stack **a)
{
	rotate_down(a);
}

void	rotate_down_b_check(t_stack **b)
{
	rotate_down(b);
}

void	rotate_down_ab_check(t_stack **a, t_stack **b)
{
	rotate_down_a_check(a);
	rotate_down_b_check(b);
}
