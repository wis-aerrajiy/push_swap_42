/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:12:19 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/10 00:19:06 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

// our main struct ==> linked list core
typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

typedef struct pro_max
{
	int		stack_size;
	int		j;
	int		i;
	int		target1;
	int		target2;
	int		index1;
	int		index2;
	int		result1;
	int		result2;
	int		final_target;
	t_stack	*f;
}	t_pro_max_var;

typedef struct max
{
	int	max1;
	int	max2;
}	t_max_number;

// operation -> swap -> push -> rotate
void	swap(t_stack **stack);
void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	rotate_down(t_stack **stack);
void	rotate_down_a(t_stack **a);
void	rotate_down_b(t_stack **b);
void	rotate_down_ab(t_stack **a, t_stack **b);
void	rotate_up(t_stack **stack);
void	rotate_up_a(t_stack **a);
void	rotate_up_b(t_stack **b);
void	rotate_up_ab(t_stack **a, t_stack **b);
void	push(t_stack **from, t_stack **to);
void	push_a(t_stack **b, t_stack **a);
void	push_b(t_stack **a, t_stack **b);

// tools helper to make life easy (like : love, money, code, girls)
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int content);
int		ft_lst_max(t_stack *head);
int		ft_lstsize(t_stack *lst);
int		ft_lst_min(t_stack *head);
int		ft_lst_index(t_stack *head, int to_find);
t_stack	*ft_lstlast(t_stack *lst);
int		is_sorted(t_stack *head);
void	ft_putstr(char *s);

// poccess of data -> filters -> errors -> intialiation of stacks
int		stack_init(t_stack **stack, int argc, char *argv[]);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);

// sort ways -> magic land 
void	small_sort(t_stack **stack);
void	easy_sort(t_stack **a, t_stack **b);
void	pro_max_sort(t_stack **a, t_stack **b, t_stack **k, int toDive);
void	push_one_from_a(t_stack **a, t_stack **b, int data, int ch);
void	push_one_from_b(t_stack **a, t_stack **b, int data);
int		check_first_inter(t_stack *stack, t_stack *base, int chunk, int j);
int		check_last_inter(t_stack *stack, t_stack *base, int chunk, int j);
void	run_to_move(t_stack **a, t_stack **b, t_pro_max_var v, t_max_number m);
void	check_and_push(t_stack **a, t_stack **b, t_pro_max_var var);

void	move_it(t_stack **a, t_stack **b);
int		ft_lst_max2(t_stack *head, int max1);

// system sort body
void	system_sort(t_stack **a, t_stack **b, t_stack **k);

// something to try
// make a copy of the list and sort it
t_stack	*sort_list_test(t_stack *head, int (*cmp)(int, int));
t_stack	*copy_list(t_stack *head);
int		ascending(int a, int b);
void	print_list(t_stack *head);

// error handling
int		in_int_range(char *arr);
int		error_not_int(char *arr);
int		error_system(char *arr);
int		ft_atoi_edited(const char *str);
int		ft_isdigit_edited(int c);
int		ft_strcmp(const char *s1, const char *s2);
void	free_list(t_stack **stack);
void	help_center(void);

//  checker part
void	push_a_check(t_stack **b, t_stack **a);
void	push_b_check(t_stack **a, t_stack **b);
void	swap_a_check(t_stack **a);
void	swap_b_check(t_stack **b);
void	swap_ab_check(t_stack **a, t_stack **b);
void	rotate_down_a_check(t_stack **a);
void	rotate_down_b_check(t_stack **b);
void	rotate_down_ab_check(t_stack **a, t_stack **b);
void	rotate_up_a_check(t_stack **a);
void	rotate_up_b_check(t_stack **b);
void	rotate_up_ab_check(t_stack **a, t_stack **b);
#endif