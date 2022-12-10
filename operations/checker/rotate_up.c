/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:50:15 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 21:28:52 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// rotate up

void	rotate_up_a_check(t_stack **a)
{
	rotate_up(a);
}

void	rotate_up_b_check(t_stack **b)
{
	rotate_up(b);
}

void	rotate_up_ab_check(t_stack **a, t_stack **b)
{
	rotate_up_a_check(a);
	rotate_up_b_check(b);
}
