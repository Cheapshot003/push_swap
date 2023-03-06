/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:14:10 by ole               #+#    #+#             */
/*   Updated: 2023/03/06 18:57:50 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fetch_string(t_stack *sk, char *args)
{
	char	**nums;
	int		i;

	i = 0;
	nums = ft_split(args, ' ');
	while (nums[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		if (ft_atoi(nums[i]) == -1 && *nums[i] != '1')
		{
			ft_putstr_fd("Error\n", 1);
			exit1(sk);
		}
		push_a(sk, ft_atoi(nums[i]));
		i--;
	}
	i = 0;
	while (nums[i] != 0)
		free(nums[i++]);
	free(nums);
}

void	fetch_numbers(t_stack *sk, char **args, int size)
{
	int	i;

	i = size;
	while (i > 0)
	{
		if (ft_atoi(args[i]) == -1 && *args[i] != '1')
		{
			ft_putstr_fd("Error\n", 1);
			exit1(sk);
		}
		push_a(sk, ft_atoi(args[i]));
		i--;
	}
}

int	check_num(char **args, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (size == 1)
	{
		return (check_string(args[1]));
	}
	while (i <= size)
	{
		while (args[i][j])
		{
			if (ft_isdigit(args[i][j]) || args[i][j] == '-')
				j++;
			else
				return (1);
		}
		j = 0;
		i++;
	}
	return (0);
}

int	check_dup(int *list, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (list[i] == list[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
