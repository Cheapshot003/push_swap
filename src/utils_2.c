/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:44:12 by ole               #+#    #+#             */
/*   Updated: 2023/03/06 18:46:53 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_smallest(int *nums, int size)
{
	int	min;
	int	i;

	i = 0;
	while (i < size)
	{
		if (nums[i] < min)
			min = nums[i];
		i++;
	}
	return (min);
}

void	sort(int *arr, int n)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	create_indexed(int *arr, int size)
{
	int	copy[1000];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		copy[i] = arr[i];
		i++;
	}
	sort(copy, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == copy[j])
				arr[i] = j;
			j++;
		}
		i++;
	}
}

int	check_string(char *args)
{
	char	**nums;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nums = ft_split(args, ' ');
	while (nums[i] != 0)
	{
		while (nums[i][j])
		{
			if (ft_isdigit(nums[i][j]) || nums[i][j] == '-')
				j++;
			else
			{
				free_bird(nums);
				return (1);
			}
		}
		j = 0;
		i++;
	}
	free_bird(nums);
	return (0);
}

void	free_bird(char **nums)
{
	int	i;

	i = 0;
	while (nums[i] != 0)
		free(nums[i++]);
	free(nums);
}
