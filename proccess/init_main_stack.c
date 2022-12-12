/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_main_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:26:30 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 00:09:09 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_splited(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

int	check_duplicat(t_stack *stack, int actual)
{
	while (stack)
	{
		if (stack->value == actual)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	stack_init(t_stack **stack, int argc, char *argv[])
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (i < argc)
	{
		if(ft_strcmp(argv[i], ""))
			return (1);
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
		{
			if (error_system(split[j])
				|| check_duplicat(*stack, ft_atoi(split[j])))
			{
				return (free_splited(split), 1);
			}
			ft_lstadd_back(stack, ft_lstnew(ft_atoi(split[j])));
			j++;
		}
		i++;
		free_splited(split);
	}
	return (0);
}
