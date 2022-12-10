/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_help1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:40:05 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 00:44:23 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(t_stack *head)
{
	if (!head)
		return (0);
	while (head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_lst_max(t_stack *head)
{
	int	max;

	max = head->value;
	while (head)
	{
		if (head->value > max)
			max = head->value;
		head = head->next;
	}
	return (max);
}

int	ft_lst_max2(t_stack *head, int max1)
{
	int	max;

	max = head->value;
	if (ft_lstsize(head) > 1 && head->value == max1)
		max = head->next->value;
	while (head)
	{
		if ((head->value > max) && head->value != max1)
			max = head->value;
		head = head->next;
	}
	return (max);
}

int	ft_lst_min(t_stack *head)
{
	int	min;
	int	i;

	i = 0;
	min = head->value;
	while (head)
	{
		if (head->value < min)
			min = head->value;
		head = head->next;
	}
	return (min);
}
