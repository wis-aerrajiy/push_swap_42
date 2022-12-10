/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro_max_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:05:12 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 00:29:13 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_one_from_a(t_stack **a, t_stack **b, int data, int ch)
{
	int	size;
	int	index;

	index = 1;
	while (index != 0)
	{
		index = ft_lst_index(*a, data);
		size = ft_lstsize(*a) / 2;
		if (index == 0)
		{
			push_b(a, b);
			if (ch == 1)
				rotate_up_b(b);
			continue ;
		}
		if (index <= size)
			rotate_up_a(a);
		else
			rotate_down_a(a);
	}
}

void	push_one_from_b(t_stack **a, t_stack **b, int data)
{
	int	size;
	int	index;

	index = 1;
	if (ft_lstsize(*a) > 1)
		if ((*a)->value > (*a)->next->value)
			swap_a(a);
	while (index != 0)
	{
		index = ft_lst_index(*b, data);
		size = ft_lstsize(*b) / 2;
		if (index == 0)
		{
			push_a(b, a);
			continue ;
		}
		if (index <= size)
			rotate_up_b(b);
		else
			rotate_down_b(b);
	}
	if (ft_lstsize(*a) > 1)
		if ((*a)->value > (*a)->next->value)
			swap_a(a);
}

void	easy_sort_1(t_stack **a, t_stack **b)
{
	int	index;
	int	size;

	while (*a)
	{
		size = ft_lstsize(*a) / 2;
		index = ft_lst_index(*a, ft_lst_min(*a));
		if (is_sorted(*a))
		{
			move_it(a, b);
			break ;
		}
		if (index == 0)
		{
			push_b(a, b);
			continue ;
		}
		if (index > size)
			rotate_down_a(a);
		else
			rotate_up_a(a);
	}
	small_sort(a);
}

void	pro_max_sort(t_stack **a, t_stack **b, t_stack **k, int toDive)
{
	int				i;
	t_pro_max_var	var;

	var.stack_size = ft_lstsize(*a);
	var.f = sort_list_test(*k, &ascending);
	var.j = var.stack_size / toDive;
	if (var.j % toDive != 0)
		var.j += 1;
	var.i = 1;
	i = 0;
	while (var.i <= toDive)
	{
		while (i < (var.j * var.i))
		{
			var.target1 = check_first_inter(*a, var.f, var.j, var.i);
			var.target2 = check_last_inter(*a, var.f, var.j, var.i);
			var.index1 = ft_lst_index(*a, var.target1);
			var.index2 = ft_lst_index(*a, var.target2);
			check_and_push(a, b, var);
			i++;
		}
		var.i++;
	}
	move_it(a, b);
}

void	move_it(t_stack **a, t_stack **b)
{
	t_pro_max_var	var;
	t_max_number	max;

	while (*b)
	{
		var.stack_size = ft_lstsize(*b);
		if (var.stack_size == 1)
		{
			push_a(a, b);
			continue ;
		}
		max.max1 = ft_lst_max(*b);
		max.max2 = ft_lst_max2(*b, max.max1);
		var.index1 = ft_lst_index(*b, max.max1);
		var.index2 = ft_lst_index(*b, max.max2);
		run_to_move(a, b, var, max);
	}
}
/*fake_stack => f; chunk => j; check => i*/