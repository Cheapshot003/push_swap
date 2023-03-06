/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:09:40 by ole               #+#    #+#             */
/*   Updated: 2023/03/03 18:57:13 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	peek_a(t_stack *sp)
{
	if (sp->top_a == -1)
	{
		write(1, "STACK EMPTY", 12);
		return (0);
	}
	return (sp->val_a[sp->top_a]);
}

int	peek_b(t_stack *sp)
{
	if (sp->top_b == -1)
	{
		write(1, "STACK EMPTY", 12);
		return (0);
	}
	return (sp->val_b[sp->top_b]);
}
