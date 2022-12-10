/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_stor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:02:08 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 00:29:20 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_first_inter(t_stack *stack, t_stack *base, int chunk, int j)
{
	t_stack	*tmp;
	int		min;
	int		max;
	int		i;

	tmp = base;
	min = (chunk * j) - chunk;
	max = chunk * j;
	while (stack)
	{
		base = tmp;
		i = 1;
		while (base)
		{
			if (i >= min && i <= max)
				if (stack->value == base->value)
					return (base->value);
			i++;
			base = base->next;
		}
		stack = stack->next;
	}
	return (0);
}

int	check_last_inter(t_stack *stack, t_stack *base, int chunk, int j)
{
	t_stack	*tmp;
	int		min;
	int		max;
	int		i;
	int		save;

	tmp = base;
	min = (chunk * j) - chunk;
	max = chunk * j;
	while (stack)
	{
		base = tmp;
		i = 1;
		while (base)
		{
			if (i >= min && i <= max)
				if (stack->value == base->value)
					save = base->value;
			i++;
			base = base->next;
		}
		stack = stack->next;
	}
	return (save);
}

void	check_and_push(t_stack **a, t_stack **b, t_pro_max_var var)
{
	if (var.index1 <= (var.stack_size / 2))
		var.result1 = var.index1 + 1;
	else
		var.result1 = var.stack_size - var.index1;
	if (var.index2 <= (var.stack_size / 2))
		var.result2 = var.index2 + 1;
	else
		var.result2 = var.stack_size - var.index2;
	if (var.result1 >= var.result2)
		var.final_target = var.target2;
	else
		var.final_target = var.target1;
	if (ft_lst_index(var.f, var.final_target)
		< ((var.i * var.j) - (var.j / 2)))
		push_one_from_a(a, b, var.final_target, 0);
	else
		push_one_from_a(a, b, var.final_target, 1);
}

void	run_to_move(t_stack **a, t_stack **b, t_pro_max_var var, t_max_number m)
{
	if (var.index1 <= (var.stack_size / 2))
			var.result1 = var.index1 + 1;
	else
		var.result1 = var.stack_size - var.index1;
	if (var.index2 <= (var.stack_size / 2))
		var.result2 = var.index2 + 1;
	else
		var.result2 = var.stack_size - var.index2;
	if (var.result1 < var.result2)
	{
		var.target1 = m.max1;
		var.target2 = m.max2;
	}
	else
	{
		var.target1 = m.max2;
		var.target2 = m.max1;
	}
	push_one_from_b(a, b, var.target1);
	push_one_from_b(a, b, var.target2);
}
