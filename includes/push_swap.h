/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:56:41 by ole               #+#    #+#             */
/*   Updated: 2023/03/06 18:16:30 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define MAX_SIZE 1000

typedef struct t_stack
{
	int	val_a[MAX_SIZE];
	int	top_a;
	int	size_a;
	int	val_b[MAX_SIZE];
	int	top_b;
	int	size_b;
	int	nums[MAX_SIZE];

}	t_stack;

//stack operations
t_stack	*init_stack(void);
void	push_a(t_stack *sp, int val);
void	push_b(t_stack *sp, int val);
int		pop_a(t_stack *sp);
int		peek_a(t_stack *sp);
int		pop_b(t_stack *sp);
int		peek_b(t_stack *sp);
//push_swap operations
void	pa(t_stack *sp);
void	pb(t_stack *sp);
void	sa(t_stack *sp);
void	sb(t_stack *sp);
void	ra(t_stack *sp);
void	rb(t_stack *sp);
void	rr(t_stack *sp);
void	rra(t_stack *sp);
void	rrb(t_stack *sp);
void	rrr(t_stack *sp);
//utils
int		check_dup(int *list, int size);
void	fetch_numbers(t_stack *sk, char **args, int size);
int		check_num(char **args, int size);
//others
void	do_shit(int *nums, t_stack *sk);
void	fill_stack(int *nums, t_stack *sk, int size);
void	sort_1(t_stack *sk);
void	sort_shit(t_stack *sk, int size);
void	sort_2(t_stack *sk);
void	sort_3(t_stack *sk);
void	sort_5(t_stack *sk);
void	print_a(t_stack *sk, int i);
void	sort_large(t_stack *sk);
int		issorted(int *arr, int size);
void	sort(int *arr, int n);
void	create_indexed(int *arr, int size);
void	push_correct(t_stack *sk);
void	sort_4(t_stack *sk);
int		get_smallest(int *nums, int size);
int		check_string(char *args);
void	fetch_string(t_stack *sk, char *args);
void	free_bird(char **nums);
void	exit1(t_stack *sk);
#endif
