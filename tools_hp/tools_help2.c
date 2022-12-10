/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_help2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:57:56 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 01:03:52 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ascending(int a, int b)
{
	return (a <= b);
}

t_stack	*copy_list(t_stack *head)
{
	t_stack	*new;
	t_stack	*tmp;

	new = NULL;
	while (head)
	{
		tmp = (t_stack *)malloc(sizeof(t_stack));
		tmp->value = head->value;
		tmp->next = new;
		new = tmp;
		head = head->next;
	}
	return (new);
}

t_stack	*sort_list_test(t_stack *head, int (*cmp)(int, int))
{
	t_stack	*current;
	t_stack	*next;
	int		temp;

	current = head;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (!(*cmp)(current->value, next->value))
			{
				temp = current->value;
				current->value = next->value;
				next->value = temp;
			}
			next = next->next;
		}
		current = current->next;
	}
	return (head);
}

void	help_center(void)
{
	ft_putstr("Usage: ./push_swap [number1] [number2] [number3] ...\n");
	ft_putstr("Example: ./push_swap 1 0 3 2 5\n");
}

void	free_list(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

// void	print_list(t_stack *head)
// {
// 	printf("-------> start <-------\n");
// 	while (head)
// 	{
// 		printf("{%d} ", head->value);
// 		head = head->next;
// 	}
// 	ft_putstr("\n-------> End <-------\n");
// }
