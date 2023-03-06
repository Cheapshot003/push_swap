/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:51:30 by ole               #+#    #+#             */
/*   Updated: 2023/03/03 18:56:26 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_large(t_stack *sk)
{
	sort_1(sk);
}

int	issorted(int *arr, int size)
{
	if (size == 1)
		return (1);
	return (arr[0] >= arr[1] && issorted(arr + 1, size - 1));
}
