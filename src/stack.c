/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:09:45 by ole               #+#    #+#             */
/*   Updated: 2023/03/06 18:56:21 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_stack *sp, int value)
{
	sp->val_a[++sp->top_a] = value;
	sp->size_a++;
}

void	push_b(t_stack *sp, int value)
{
	sp->val_b[++sp->top_b] = value;
	sp->size_b++;
}

int	pop_a(t_stack *sp)
{
	int	value;

	if (sp->top_a == -1)
	{
		return (0);
	}
	value = sp->val_a[sp->top_a];
	sp->top_a--;
	sp->size_a--;
	return (value);
}

int	pop_b(t_stack *sp)
{
	int	value;

	if (sp->top_b == -1)
	{
		return (0);
	}
	value = sp->val_b[sp->top_b];
	sp->top_b--;
	sp->size_b--;
	return (value);
}

t_stack	*init_stack(void)
{
	t_stack	*sk;

	sk = malloc(sizeof(t_stack));
	sk->size_a = 0;
	sk->size_b = 0;
	sk->top_a = -1;
	sk->top_b = -1;
	return (sk);
}
