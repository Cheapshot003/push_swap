/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:39 by otietz            #+#    #+#             */
/*   Updated: 2023/03/03 19:05:00 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	get_wordcount(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i + 1] != '\0')
				i++;
			wc++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			wc++;
		i++;
	}
	return (wc);
}

static char	*get_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*ret;

	ret = NULL;
	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (i > 0)
		ret = malloc((sizeof(char) * i) + 1);
	if (ret != NULL)
	{
		while (j < i)
		{
			ret[j] = s[j];
			j++;
		}
		ret[j] = '\0';
	}
	else
		free(ret);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ret;

	if (s == NULL)
		return (NULL);
	ret = malloc(sizeof(char *) * ((get_wordcount(s, c) + 1)));
	i = 0;
	if (ret != NULL)
	{
		while (*s != '\0')
		{
			while (*s != '\0' && *s == c)
				s++;
			if (*s != '\0')
			{
				ret[i] = get_word(s, c);
				i++;
			}
			while (*s != '\0' && *s != c)
				s++;
		}
		ret[i] = NULL;
		return (ret);
	}
	return (NULL);
}
