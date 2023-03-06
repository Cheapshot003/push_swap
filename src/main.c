/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:10:12 by ole               #+#    #+#             */
/*   Updated: 2023/03/06 18:17:12 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*sk;

	sk = init_stack();
	if (argc < 2)
		exit1(sk);
	if (check_num(argv, argc - 1))
	{
		ft_putstr_fd("Error\n", 1);
		exit1(sk);
	}
	if (argc > 2)
		fetch_numbers(sk, argv, argc - 1);
	else
		fetch_string(sk, argv[1]);
	if (check_dup(sk->val_a, argc) == 1)
	{
		ft_putstr_fd("Error\n", 1);
		exit1(sk);
	}
	do_shit(sk->val_a, sk);
	free(sk);
	return (0);
}

void	do_shit(int *nums, t_stack *sk)
{
	int	size;

	size = sk->size_a;
	create_indexed(nums, size);
	if (issorted(sk->val_a, sk->size_a))
		return ;
	if (size == 2)
		sort_2(sk);
	if (size == 3)
		sort_3(sk);
	if (size == 4)
		sort_4(sk);
	if (size == 5)
		sort_5(sk);
	else
		sort_large(sk);
}

void	exit1(t_stack *sk)
{
	free(sk);
	exit(EXIT_SUCCESS);
}
