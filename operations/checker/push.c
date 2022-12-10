/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:19:09 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 20:34:44 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_a_check(t_stack **b, t_stack **a)
{
	push(b, a);
}

void	push_b_check(t_stack **a, t_stack **b)
{
	push(a, b);
}
