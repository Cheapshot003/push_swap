/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:56:56 by ole               #+#    #+#             */
/*   Updated: 2023/03/06 18:50:52 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_1(t_stack *sk)
{
	int	size;
	int	i;
	int	j;
	int	num;

	j = 0;
	i = 0;
	size = sk->size_a;
	while (!issorted(sk->val_a, sk->size_a))
	{
		j = 0;
		while (j < size)
		{
			num = sk->val_a[sk->top_a];
			if ((num >> i) & 1)
				ra(sk);
			else
				pb(sk);
			++j;
		}
		while (sk->top_b > -1)
			pa(sk);
		++i;
	}
}
