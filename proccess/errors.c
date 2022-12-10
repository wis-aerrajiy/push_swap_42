/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:25:23 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 00:05:07 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	in_int_range(char *arr)
{
	if (ft_atoi_edited(arr))
		return (1);
	return (0);
}

int	error_not_int(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!ft_isdigit_edited(arr[i]))
			return (1);
		i++;
	}
	return (0);
}

int	error_system(char *arg)
{
	if (error_not_int(arg) || in_int_range(arg))
		return (1);
	return (0);
}
