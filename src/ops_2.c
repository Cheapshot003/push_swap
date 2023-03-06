/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:10:06 by ole               #+#    #+#             */
/*   Updated: 2023/03/03 18:56:08 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *sk)
{
	int	temp;
	int	i;

	write(1, "ra\n", 3);
	i = sk->size_a - 1;
	temp = sk->val_a[sk->size_a - 1];
	while (i > 0)
	{
		sk->val_a[i] = sk->val_a[i - 1];
		i--;
	}
	sk->val_a[0] = temp;
}

void	rb(t_stack *sk)
{
	int	temp;
	int	i;
	int	size;

	ft_putstr_fd("rb\n", 1);
	size = sk->top_b + 1;
	i = 0;
	temp = sk->val_b[0];
	while (i < size - 1)
	{
		sk->val_b[i] = sk->val_b[i + 1];
		i++;
	}
	sk->val_b[size - 1] = temp;
}

void	rr(t_stack *sk)
{
	write(1, "rr\n", 3);
	ra(sk);
	rb(sk);
}
