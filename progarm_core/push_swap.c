/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:30:51 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 00:51:59 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	int		errors;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*stack_k;

	if (argc < 2)
		return (help_center(), 0);
	stack_a = NULL;
	stack_b = NULL;
	stack_k = NULL;
	errors = stack_init(&stack_a, argc, argv);
	if (errors)
		return (ft_putstr("Error\n"), free_list(&stack_a), 1);
	stack_k = copy_list(stack_a);
	system_sort(&stack_a, &stack_b, &stack_k);
	return (0);
}
