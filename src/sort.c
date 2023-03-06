/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:56:25 by ole               #+#    #+#             */
/*   Updated: 2023/03/03 18:56:50 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack *sk)
{
	if (sk->val_a[0] < sk->val_a[1])
		sa(sk);
}

void	sort_3(t_stack *sk)
{
	int	*arr;

	arr = sk->val_a;
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
		sa(sk);
	else if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
	{
		sa(sk);
		rra(sk);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
		ra(sk);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
	{
		sa(sk);
		ra(sk);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] > arr[0])
		rra(sk);
}

void	sort_4(t_stack *sk)
{
	while (sk->val_a[sk->top_a] != 0)
		ra(sk);
	pb(sk);
	sort_3(sk);
	pa(sk);
}

void	sort_5(t_stack *sk)
{
	while (sk->val_a[sk->top_a] != 0)
		ra(sk);
	pb(sk);
	while (sk->val_a[sk->top_a] != sk->size_a)
		ra(sk);
	pb(sk);
	sort_3(sk);
	pa(sk);
	ra(sk);
	pa(sk);
}

void	push_correct(t_stack *sk)
{
	int	i;
	int	temp;
	int	temp_top;

	i = 0;
	temp_top = sk->val_a[sk->top_a];
	temp = sk->val_b[sk->top_b];
	if (temp_top > temp)
	{
		pa(sk);
		return ;
	}
	while (sk->val_a[sk->top_a] > temp)
	{
		ra(sk);
		i++;
	}
	pa(sk);
	while (i > 0)
	{
		rra(sk);
		i--;
	}
}
