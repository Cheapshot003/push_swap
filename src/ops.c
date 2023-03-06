/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:09:52 by ole               #+#    #+#             */
/*   Updated: 2023/03/03 18:59:21 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *sk)
{
	int	temp;
	int	temp2;

	write(1, "sa\n", 3);
	temp = pop_a(sk);
	temp2 = pop_a(sk);
	push_a(sk, temp);
	push_a(sk, temp2);
}

void	sb(t_stack *sk)
{
	int	temp;
	int	temp2;

	write(1, "sb\n", 3);
	temp = pop_b(sk);
	temp2 = pop_b(sk);
	push_b(sk, temp);
	push_b(sk, temp2);
}

void	ss(t_stack *sk)
{
	write(1, "ss\n", 3);
	sa(sk);
	sb(sk);
}

void	pa(t_stack *sk)
{
	if (sk->top_b == -1)
		return ;
	write(1, "pa\n", 3);
	push_a(sk, pop_b(sk));
}

void	pb(t_stack *sk)
{
	if (sk->top_a == -1)
		return ;
	write(1, "pb\n", 3);
	push_b(sk, pop_a(sk));
}
