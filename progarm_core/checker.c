/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:12:16 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 02:32:19 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/get_next_line.h"

int	check_command(char *buffer, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strcmp(buffer, "sa") == 1)
		swap_a_check(stack_a);
	else if (ft_strcmp(buffer, "sb") == 1)
		swap_b_check(stack_b);
	else if (ft_strcmp(buffer, "ss") == 1)
		swap_ab_check(stack_a, stack_b);
	else if (ft_strcmp(buffer, "pa") == 1)
		push_a_check(stack_b, stack_a);
	else if (ft_strcmp(buffer, "pb") == 1)
		push_b_check(stack_a, stack_b);
	else if (ft_strcmp(buffer, "ra") == 1)
		rotate_up_a_check(stack_a);
	else if (ft_strcmp(buffer, "rb") == 1)
		rotate_up_b_check(stack_b);
	else if (ft_strcmp(buffer, "rr") == 1)
		rotate_up_ab_check(stack_a, stack_b);
	else if (ft_strcmp(buffer, "rra") == 1)
		rotate_down_a_check(stack_a);
	else if (ft_strcmp(buffer, "rrb") == 1)
		rotate_down_b_check(stack_b);
	else if (ft_strcmp(buffer, "rrr") == 1)
		rotate_down_ab_check(stack_a, stack_b);
	else
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*buffer;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (stack_init(&stack_a, argc, argv))
		return (ft_putstr("Error\n"), free_list(&stack_a), 1);
	buffer = malloc(3);
	buffer = get_next_line(0);
	while (buffer)
	{
		if (!check_command(buffer, &stack_a, &stack_b))
			return (ft_putstr("Error\n"), free_list(&stack_a),
				free_list(&stack_b), 1);
		free(buffer);
		buffer = get_next_line(0);
	}
	if (is_sorted(stack_a) && stack_b == NULL)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}
