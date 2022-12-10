/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:53 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 00:36:16 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temps;

	if (*lst)
	{
		temps = ft_lstlast(*lst);
		temps->next = new;
	}
	else
		*lst = new;
}

t_stack	*ft_lstnew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new != NULL)
	{
		new->value = content;
		new->next = NULL;
	}
	return (new);
}

int	ft_lstsize(t_stack *lst)
{
	t_stack	*clst;
	int		i;

	if (!lst)
		return (0);
	clst = lst;
	i = 0;
	while (clst != NULL)
	{
		i++;
		clst = clst->next;
	}
	return (i);
}

int	ft_lst_index(t_stack *head, int to_find)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->value == to_find)
			return (i);
		i++;
		head = head->next;
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
